/*Program to demonstsrate assignment operators*/
#include<stdio.h>
main()
{
    int a=10,b=30;

      printf("present values of a and b is : %d,%d" ,a,b);

    /*assignment operators*/


     /*+=*/

     a+=1;
     b+=2;

     printf("\n The value of a,b after performing assignment operator is :%d,%d",a,b);

     /*-=*/

     a-=1;
     b-=2;

     printf("\n The value of a,b after performing  assignment operator is :%d,%d",a,b);

     /**=*/

     a*=1;
     b*=2;

     printf("\n The value of a,b after performing  assignment operator is :%d,%d",a,b);

     /*/=*/

     a/=1;
     b/=2;

     printf("\n The value of a,b after performing  assignment operator is :%d,%d",a,b);

     /*%=*/

     a%=1;
     b%=2;

     printf("\n The value of a,b after performing assignment operator is :%d,%d",a,b);



}
