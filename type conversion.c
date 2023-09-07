/*Program to demonstrate type conversion in c*/
#include<stdio.h>
main()
{
    /*Implicit type*/
    int score;
    float totalsubjects;
    float percentage;



    printf("\nEnter the score : ");
    scanf("\n%d",&score);

    printf("\nEnter the totalsubjects : ");
    scanf("\n%f",&totalsubjects);


    percentage = (score / totalsubjects);

    printf("\nPercentage is : %f",percentage);


    /*explicit type*/


    printf("\n\n\nEnter the score : ");
    scanf("\n%d",&score);



    printf("\nEnter the totalsubjects : ");
    scanf("\n%f",&totalsubjects);


    percentage = ((float)score / totalsubjects);


    printf("\n\nPercentage is : %f",percentage);
}
