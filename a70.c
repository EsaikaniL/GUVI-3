#include<stdio.h>
int main(void)
{
int n,k=0,r=1,t=2,l;
printf("Enter the number:");
scanf("%d",&n);
while(n!=1)
{
n=n/2;
k++;
}
for(l=0;l<k+1;l++)
{
r=r*t;
}
printf("The nearest greater power of 2 is:%d",r);
return 0;
}
