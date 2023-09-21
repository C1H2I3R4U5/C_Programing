/*Printing even numbers*/
#include<stdio.h>
int main()
{
  int i=0,n;

  printf("Enter the value : ");
  scanf("%d",&n);

  while(i<=n)
  {
      printf("%d\n",i);
      i=i+2;
  }


  return 0;

}
