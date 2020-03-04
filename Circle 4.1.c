//Area = 3.1416 * radius * radius
#include<stdio.h>
#include<math.h>
int main()
{
    float radius, circle_area;
    printf("Enter value of radius : ");
    scanf("%f",&radius);

    //circle_area = 3.1416 * radius * radius;
    circle_area = M_PI * radius * radius;

    printf("Area of Circle = %.2f\n",circle_area);

    return 0;
}
