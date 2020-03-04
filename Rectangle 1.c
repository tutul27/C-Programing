//area of rectangle = length * width;

#include<stdio.h>
int main()
{
    float length,width,rectangle_area;
    printf("Enter the value of length : ");
    scanf("%f", &length);

    printf("Enter the value of width : ");
    scanf("%f",&width);

    rectangle_area = length * width;
    printf("Rectangle area = %f",rectangle_area);


    return 0;
}
