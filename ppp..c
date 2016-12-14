/*
student name=sushant nepal
roll no=42
subject=programming fundamental
program=write a c program to swap the two number without using third variable
*/

#include<stdio.h>
#include<conio.h>

int main(){
int a,b;
printf("Enter first number");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);

printf("before swap 'a':%d\n",a);
printf("before swap 'b':%d\n",b);

a=a-b;
b=a+b;
a=b-a;

printf("after swap 'a':%d\n",a);
printf("after swap 'b':%d\n",b);



getch();
return(0);

}
