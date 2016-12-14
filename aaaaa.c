/*
name=sushant nepal
roll=42
subject=programming fundamental
program=write a menu based program to create a calculator using switch case
*/

#include<stdio.h>;
#include<conio.h>;
int main(){
    int a,n,c,b,sub,pro,div;
printf("\t\t\t\t simple calculator\n");
printf("choose any number\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiply\n");
printf("4.Divide\n");
printf("5.Exit\n");

printf("Choose any number:>>");
scanf("%d",&n);

switch(n)
{
case 1:
        printf("Enter first number:\n");
        scanf("%d",&a);
        printf("Enter second number:\n");
        scanf("%d",&b);
        c=a+b;
        printf("Sum is:%d\n",c);

        break;

case 2:
         printf("Enter first number");
        scanf("%d",&a);
        printf("Enter second number");
        scanf("%d",&b);
        sub=a-b;
        printf("Sub is:%d\n",sub);

        break;



case 3:
        printf("Enter first number");
        scanf("%d",&a);
        printf("Enter second number");
        scanf("%d",&b);
        pro=a*b;
        printf("Pro is:%d\n",pro);

        break;

case 4:
        printf("Enter first number");
        scanf("%d",&a);
        printf("Enter second number");
        scanf("%d",b);
        div=a%b;
        printf("Div is:%d\n",div);

        break;

default:
        printf("Thank You for visiting:");
}



getch();
return(0);
}
