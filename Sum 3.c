//Write a program that takes two integer and display sum
#include<stdio.h>
int main()
{
    //sum two integer;
     int num1,num2,sum;
     float average;
     printf("Enter tow number : ");
     scanf("%d %d",&num1,&num2);

     sum = num1 + num2;
     printf("The sum is %d\n",sum);



     average = (float)sum/2; //type casting
     printf("The average is %f\n",average);

    return 0;
}
