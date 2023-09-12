/*Finding greatest of two numbers*/
#include<stdio.h>
 int main()
{
   int  a,b,r=(a>b);

   printf("Enter the value of a : ");
   scanf("%d",&a);


   printf("\nEnter the value of b : ");
   scanf("%d",&b);


    /*if else*/

    if(r=(a>b))
    {
    r=a;
    printf("\na is greater : %d",a);
    }
    else
    {
    r=b;
    printf("\nb is greater : %d",b);
    }

    return 0;

}
