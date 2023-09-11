/*Program to demonstrate nested if else in c*/
#include<stdio.h>
main()
{
   int attendencepercentage;


   printf("Enter the attendencepercentage : ");
   scanf("%d",&attendencepercentage);

   if(attendencepercentage>=75)

   {
       printf("\nEligible for writing End Semster Examination.");

       if(attendencepercentage>=90)
       {
           printf("\nCongrats!You are promoted to next year");

           if(attendencepercentage>=90)
           {
               printf("\nNo need to write written exam.");
           }
           else
           {

               printf("\nYou need to write written exam.");
           }
       }
       else
        {

           printf("\nSorry!You are not promoted to next year");

       }


   }

   else

   {
       printf("\nNot eligible for writing End Semster Examination.");
   }


}
