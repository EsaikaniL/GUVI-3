#include<stdio.h>
int main()
{
int n,a[55],k,count=0,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=1;i<=n;i++)
{
if(a[i]==n)
{
printf("yes");
}
}
return 0;
}
