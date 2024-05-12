#include<stdio.h>
#include<stdlib.h>
#include<pic18f458.h>

void main()
{
    int sum ;
    sum  = 0x20  / 0x30 ;
    TRISD = 0x00 ;
    PORTD = sum ;
}
