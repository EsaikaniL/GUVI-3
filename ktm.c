include<stdio.h>
int main()
{
char s1[28],s2[28];
printf("string");
scanf("%s",&s1);
int t,j;
t=0;
if(t%2==0)
{
temp=s1[t];
s2[t]=s1[t+2];
s1[t+2]=temp;
t++;
printf("%s",s1[t+2]);
}
else
{
temp=s1[t];
s2[t]=s1[t+1];
s1[t+1]=temp;
printf("%s",s1[t+2]);
t++;
}
return 0;
}
