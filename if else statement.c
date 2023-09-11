/*Program to demonstrate if else in c*/
#include<stdio.h>
main()
{
   int attendencepercentage;


   printf("Enter the attendencepercentage : ");
   scanf("%d",&attendencepercentage);

   if(attendencepercentage>=75)

   {
       printf("\nEligible for writing End Semster Examination.");
   }

   else

   {
       printf("\nNot eligible for writing End Semster Examination.");
   }


}
