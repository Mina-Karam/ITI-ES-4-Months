/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to find diameter, circumference and area of circle
 */

#include "stdio.h"

int main()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("\nDiameter = %0.2f units \n", 2 * radius);
    printf("\nCircumference of circle = %0.2f units \n", 2 * 3.14 * radius );
    printf("\nArea of circle = %0.2f sq. units \n", 3.14 * radius * radius);
    
    return 0;
}