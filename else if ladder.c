/*Program to demonstrate else if ladder in c*/
#include<stdio.h>
main()
{
   int percentage;


   printf("Enter the percentage : ");
   scanf("%d",&percentage);

   if(percentage>=95)
    {
        printf(" Your grade is : O");
    }

      else if(percentage>=85)
          {
              printf("Your grade is : A+");
          }

            else if(percentage>=65)
            {
                printf("\nYour grade is : A ");
            }
               else if(percentage>=45)
               {
                   printf("\nYour grade is : B+");
               }




   else

   {
       printf("\nFailed");
   }


}
