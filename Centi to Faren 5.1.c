//Write a C Program that converts centigrade to Fahrenheit
//    f = (c * 1.8) + 32;

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the value of Centigrade : ");
    scanf("%f",&c);

    f = (c * 1.8) + 32;
    printf("Centigrade to Fahrenheit = %f",f);
    return 0;
}
