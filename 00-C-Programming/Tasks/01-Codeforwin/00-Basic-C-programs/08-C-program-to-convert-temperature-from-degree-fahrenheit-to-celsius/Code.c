/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to convert temperature from degree fahrenheit to celsius
 */

#include "stdio.h"

int main()
{
    float fahrenheit ;

    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &fahrenheit );

    printf("\nTemperature in celsius  = %0.2f C \n", (fahrenheit - 32) * 5 / 9);

    return 0;
}