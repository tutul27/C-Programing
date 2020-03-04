//Write a C Program that describe  Assignment Operator
// = , + , - , -= , += , /= , %=

#include<stdio.h>
int main()
{
    //int a = 5
    int a ;

    printf("Enter the number of  a : ");
    scanf("%d",&a);


    //use of += operator
     a +=  2;
     printf("%d\n",a);
     a+= a+2;
     printf("%d\n",a);


    //use of -= operator
      a -=  2;
     printf("%d\n",a);
     a-= a+2;
     printf("%d\n",a);


     //use of += operator
     a *=  2;
     printf("%d\n",a);
     a*= a+2;
     printf("%d\n",a);


    //use of += operator
     a /=  2;
     printf("%d\n",a);
     a/= a+2;
     printf("%d\n",a);


    //use of += operator
     a %=  2;
     printf("%d\n",a);
     a%= a+2;
     printf("%d\n",a);






    return 0;
}
