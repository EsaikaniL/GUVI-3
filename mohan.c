#include<stdio.h>
int main()
{
int k=24,count=0;
while(k!=0)
{
k=k/10;
++count;
printf("sum of digits is %d",count);
}
return 0;
}
