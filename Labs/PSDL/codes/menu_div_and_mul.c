#include<stdio.h>
#include<stdlib.h>
#include<pic18f458.h>

int multiply(int a,int b)
{
    int result ;
    result = a*b;
    return result ;
}

void divide(int a,int b)
{
    int result ;
    result = a/b;
    PORTC = result;
    PORTB = a%b;
}

void main()
{
    TRISC = 0x00 ;
    TRISB = 0x00 ;
    
    LATD = 0 ;
    
    int a;
    int b;
    a = 0x25;
    b = 0x22;
    while(1)
    {
        if(LATD)
        {
            PORTC = multiply(a,b);
        }
        else
        {
            divide(a,b) ; 
        }
    }
}




