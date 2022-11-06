/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to perform all arithmetic operations
 */

#include "stdio.h"

int main()
{
    int num1, num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Sum = %d\n", num1 + num2);
    printf("Difference  = %d\n", num1 - num2);
    printf("Product  = %d\n", num1 * num2);
    printf("Quotient  = %d\n", num1 / num2);
    printf("Modulus  = %d\n", num1 % num2);
    
    return 0;
}