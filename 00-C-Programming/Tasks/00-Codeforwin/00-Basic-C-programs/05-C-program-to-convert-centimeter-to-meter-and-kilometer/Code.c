/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to convert centimeter to meter and kilometer
 */

#include "stdio.h"

int main()
{
    float length;

    printf("Enter length in centimeter: ");
    scanf("%f", &length);

    printf("\nLength in meter = %0.2f m \n", length / 100);
    printf("\nLength in Kilometer  = %0.2f km \n", length / 100000);

    return 0;
}