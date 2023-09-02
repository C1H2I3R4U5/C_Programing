/*Program is demonstrate the logical operator in  c*/
#include<stdio.h>
main()
{
  /* variables declaration */
  int a=10,b=20;

/*And operator*/

 if (a<b&&b<a)
 {
   printf("1 ");
   }
else
    {
   printf("0");
       }


   /*Or*/

 if (a<b||b<a)
 {
   printf("1 ");
   }
else
    {
   printf("0");
       }


/*not*/

 if (!(a<b&&b<a))
 {
   printf("1 ");
   }
else
    {
   printf("0");
       }


}


