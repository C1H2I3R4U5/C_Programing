/*Program to demonstrate special type operators*/
#include<stdio.h>
main()
{
   /*Variable Declaration*/
   int a,b,x;

   x = (a=10,b=20,a+b);

   /*print the value of x*/
   printf("The value of X is : %d",x );

}
