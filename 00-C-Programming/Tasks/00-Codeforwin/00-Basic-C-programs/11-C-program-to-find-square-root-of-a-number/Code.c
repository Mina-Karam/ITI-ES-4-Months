/**
 * Autor: Mina Karam
 * Date: 1/11/2022
 * 
 * Description: 
 *          C program to find square root of a number
 */

#include "stdio.h"
#include "math.h"

int main()
{
    double num;

    printf("Enter any number : ");
    scanf("%lf", &num);

    printf("Square root of %.2lf = %.2lf\n", num, sqrt(num));

    return 0;
}