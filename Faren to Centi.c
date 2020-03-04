//Write a Program that converts Fahrenheit to Centigrade
// c = (f - 32)/1.8

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the value of Fahrenheit : ");
    scanf("%f",&f);

    c = (f - 32)/1.8;
    printf("Fahrenheit to Centigrade = %f",c);
    return 0;
}
