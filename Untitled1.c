/*
student name:sushant nepal
subject:programming fundamental
lab sheet no:07
program:wap to print your name
date:22/11/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int a,pro,sqr, sqrroot;
printf("enter your number: \n");
scanf("%d",&a);
pro=a*a;
printf("the product of your numebr: %d\n ",pro);
sqr=pow(a,2);
printf("the squqre of your number: %d\n ",sqr);
sqrroot=sqrt(a);
printf("the square root of your number: %d\n ",sqrroot);
getch();
return(0);
}
