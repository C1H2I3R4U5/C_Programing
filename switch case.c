/*Program to demonstrate switch case in c*/
#include<stdio.h>
main()
{
    int a,b;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b is :  ");
    scanf("%d",&b);

        switch(a+b)
        {
            case 10 :
            printf("10");
            break;

            case 20:
            printf("20");
            break;

            case 40:
            printf("40");
            break;

            default :
            printf("not matched");
            break;
      }

}
