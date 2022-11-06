/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to convert days to years weeks and days
 */

#include "stdio.h"

int main()
{
    int days ;

    printf("Enter days : ");
    scanf("%d", &days );

    printf("\nYears = %d\n", days / 365);
    printf("\nWeeks = %d\n", (days % 365) / 7);
    printf("\nDays = %d\n", days - (((days / 365)*365) + (((days % 365)/7)*7)));
    
    return 0;
}