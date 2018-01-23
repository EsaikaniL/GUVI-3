#include<stdio.h> 
int main(int) 
{ 
int j,a[50],t,n,flag; 
scanf("%d",&n); 
for(t=0;t<n;t++) 
{ 
flag=0; 
for(j=0;j<n;j++) 
{ 
if(a[t]== a[j]) 
{ 
flag++; 
} 
else 
continue; 
} 
if(flag==1) 
printf("%d",a[t]); 
} 
return 0;
} 
