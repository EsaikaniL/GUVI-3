#include<stdio.>
int main()
{
int num,a=2,b=4,c;
printf("enter the range:");
for(num=a;num<=b;num++)
{
if(num%c==0)
break;
}
if(c==num)
printf("%d",num);
return 0;
}
