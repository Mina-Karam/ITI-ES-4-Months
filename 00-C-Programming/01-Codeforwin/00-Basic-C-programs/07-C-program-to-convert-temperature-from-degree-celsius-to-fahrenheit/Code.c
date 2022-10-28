/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to convert temperature from degree celsius to fahrenheit
 */

#include "stdio.h"

int main()
{
    float Celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &Celsius);

    printf("\nTemperature in Fahrenheit = %0.2f F \n", (Celsius * 9 / 5) + 32);

    return 0;
}