/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to find area of a rectangle
 */

#include "stdio.h"

int main()
{
    float length, width;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    printf("\nArea of rectangle = %0.2f sq. units \n",(length * width));
    
    return 0;
}