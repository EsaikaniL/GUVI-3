#include<stdio.h>
void main()
{
int s,i,k;
scanf("%d",&s);
int a[20];
for(i=0;i<s;i++)
{scanf("%d",&a[i]);}
for(i=0;i<s;i++)
{
    for(k=i+1;k<s;k++)
{
if(a[i]==a[k])
printf("%d ",a[i]);}
} 
return 0;
}
