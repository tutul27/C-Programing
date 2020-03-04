//Write a program that takes two number and display sum,sub,multi,div,module;
#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter the two number : ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("Sum = %d\n",result);

    result = num1 - num2;
    printf("Sub = %d\n",result);

    result = num1 * num2;
    printf("Multiple = %d\n",result);


    result = num1 + num2;
    printf("Div = %d\n",result);

    result = num1 % num2;
    printf("Module = %d\n",result);


    return 0;
}
