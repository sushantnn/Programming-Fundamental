/*
student=sushant nepal
roll no=42
subject=programming fundamental
labsheet=11
program= wap to find largest number of three numbers
date=12/12/2016
*/
#include<stdio.h>
#include<conio.h>

int main(){
int a,b,c;
printf("enter the first number:\n");
scanf("%d",&a);
printf("enter the secomd number:\n");
scanf("%d,&b");
printf("enter the third number;\n");
scanf("%d",&c);
if (a>=b&a>=c){
printf("a is the greatest number");
}
else if(b>=a&b>=c){
printf("b is the greatest number");}
else
    printf("c is the greatest number");
    getch();
return(0);





}
