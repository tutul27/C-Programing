//Write a program that calculate the area of triangle

#include<stdio.h>>
int main()
{
    float base, height, area;
    printf(" Enter the Base : ");
    scanf("%f",&base);

    printf("Enter the height : ");
    scanf("%f",&height);

    area = (float)1/2 * base * height;//type casting
    printf("Area : %f\n",area);


    return 0;

}
