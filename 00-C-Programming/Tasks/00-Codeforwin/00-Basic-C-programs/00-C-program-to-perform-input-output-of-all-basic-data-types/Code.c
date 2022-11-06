/**
 * Autor: Mina Karam
 * Date: 28/10/2022
 * 
 * Description: 
 *          C program to demonstrate input output of primitive data types
 */

#include "stdio.h"

int main()
{
    /* Declare all primitive and derived types */
    char charValue;
    unsigned char uCharValue;

    short shortValue;
    unsigned short uShortValue;

    int intValue;
    unsigned int uIntValue;

    long longValue;
    unsigned long uLongValue;

    long long longLongValue;
    unsigned long long uLongLongValue;

    float floatValue;
    double doubleValue;
    long double longDoubleValue;

    /* Read input in each type */

    printf("Enter a character: ");
    charValue = getchar();
    getchar(); 
    
    printf("Enter another character: ");
    uCharValue = getchar();
    getchar();
    
    printf("Enter a signed short value: ");
    scanf("%hi", &shortValue);
    
    printf("Enter an unsigned short value: ");
    scanf("%hu", &uShortValue);
    
    printf("Enter an signed integer value: ");
    scanf("%d", &intValue);
    
    printf("Enter an unsigned integer value: ");
    scanf("%lu", &uIntValue);
    
    printf("Enter a signed long value: ");
    scanf("%ld", &longValue);
    
    printf("Enter an unsigned long value: ");
    scanf("%lu", &uLongValue);
    
    printf("Enter a signed long long value: ");
    scanf("%lld", &longLongValue);
    
    printf("Enter an unsigned long long value: ");
    scanf("%llu", &uLongLongValue);
    
    printf("Enter a float value: ");
    scanf("%f", &floatValue);
    
    printf("Enter a double value: ");
    scanf("%lf", &doubleValue);
    
    printf("Enter a long double value: ");
    scanf("%Lf", &longDoubleValue);
    

    /* Print the value of all variable */

    printf("\nYou entered character: '%c' \n", charValue);
    printf("You entered unsigned character: '%c' \n\n", uCharValue);
    
    printf("You entered signed short: %hi \n", shortValue);
    printf("You entered unsigned short: %hu \n\n", uShortValue);
    
    printf("You entered signed int: %d \n", intValue);
    printf("You entered unsigned int: %lu \n\n", uIntValue);
    
    printf("You entered signed long: %ld \n", longValue);
    printf("You entered unsigned long: %lu \n\n", uLongValue);
    
    printf("You entered signed long long: %lld \n", longLongValue);
    printf("You entered unsigned long long: %llu \n\n", uLongLongValue);
    
    printf("You entered float: %f \n", floatValue);
    printf("You entered double: %lf \n", doubleValue);
    printf("You entered long double: %lf \n", longDoubleValue);

    return 0;
}