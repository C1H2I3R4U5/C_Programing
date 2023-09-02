/*This program is used to convert the  fahrenheit value into celsius*/
#include<stdio.h>
main()
{
 /*variable declaration*/
 float f,r;


 printf("Enter the value of f: ");
 scanf("%f",&f);

 /*conversion*/
 r = ((f-32)*5)/9;


 /*print the result*/
 printf("Celusius value is: %f",r);

}



