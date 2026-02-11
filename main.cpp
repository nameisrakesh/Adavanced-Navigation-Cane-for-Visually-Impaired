#include <reg52.h>
#include <post.h>
#include <lcd4.h>
#include <serial.h>
#include <gsm.h>
#include <gps.h>

sbit IR   = P1^0;
sbit EME  = P1^1;
sbit BUZZ = P0^6;

bit obstacle_flag = 0;
bit emergency_flag = 0;

/* Simple Delay */
void delay_ms(unsigned int d)
{
    while(d--)
        post(1);
}

/* Send SMS */
void send_sms(char *num, char *msg)
{
    gps();                               // Get location
    txs("AT+CMGS=\"");
    txs(num);
    txs("\"\r\n");
    delay_ms(1000);
    txs(msg);
    tx(0x1A);                           // CTRL+Z
    delay_ms(1500);
}

/* LCD Startup */
void lcd_startup()
{
    stringlcd(0x80,"Navigation Cane");
    stringlcd(0xC0,"Visually Impaired");
    delay_ms(1500);
}

/* Obstacle Handler */
void obstacle_detected()
{
    if(obstacle_flag == 0)
    {
        obstacle_flag = 1;
        BUZZ = 1;

        stringlcd(0x80,"Obstacle Found ");
        send_sms("9701142820","Obstacle Detected");

    }
}

/* Emergency Handler */
void emergency_detected()
{
    if(emergency_flag == 0)
    {
        emergency_flag = 1;
        BUZZ = 1;

        stringlcd(0x80,"Emergency !!! ");
        send_sms("9XXXXXXXXX","Emergency Alert");

    }
}

void normal_state()
{
    BUZZ = 0;
    obstacle_flag = 0;
    emergency_flag = 0;

    stringlcd(0x80,"System Normal  ");
}

/* MAIN */
void main()
{
    IR = 1;
    EME = 1;
    BUZZ = 0;

    serialinit();
    initlcd();
    gsminit();

    lcd_startup();

    while(1)
    {
        if(IR == 0)
        {
            delay_ms(20);       // debounce
            if(IR == 0)
                obstacle_detected();
        }

        else if(EME == 0)
        {
            delay_ms(20);       // debounce
            if(EME == 0)
                emergency_detected();
        }

        else
        {
            normal_state();
            delay_ms(300);
        }
    }
}
