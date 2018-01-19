#include<stdio.h>
#include<conio.h>
int main()
{
int m,rev,num=0;
printf("enter the number");
scanf("%d",&m);
while(m!=0)
{
rev=rev*10;
rev=rev%m;
m=m/10;
}
}
