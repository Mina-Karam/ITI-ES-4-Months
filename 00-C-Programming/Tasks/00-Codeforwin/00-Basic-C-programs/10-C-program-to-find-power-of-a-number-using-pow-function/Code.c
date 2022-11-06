/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to find power of a number using pow function
 */

#include "stdio.h"

int main()
{
    int base, exponent;

    printf("Enter base : ");
    scanf("%d", &base);

    printf("Enter exponent : ");
    scanf("%d", &exponent);

    printf("\n%d ^ %d = %d\n", base, exponent, base ^ exponent);
    
    return 0;
}