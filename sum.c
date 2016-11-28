/*
 student name: sushant nepal
subject:programming fundamental
labsheet no:07
program:wap to print your name
date:28/11/2016
*/
#include <stdio.h>
#include <conio.h>


int main()
{
int a,b,sum,dif,div,pro;
printf ("enter your first number:\n");
scanf("%d",& a);
printf("enter your second number:\n");

scanf("%d",&b);
sum=a+b;
dif=a-b;
div=a/b;
pro=a*b;
printf("the sum of two number is:%d \n",sum);
printf("the difference of two number is:%d \n",dif);
printf("the division of two number is:%d \n",div);
printf("the product of two number is:%d \n",pro);
getch();
return(0);

}

