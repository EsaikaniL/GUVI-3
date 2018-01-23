#include<stdio.h>
void main()
{
int num=45,digit,temp,rev=0;
printf("enter the no");
temp=num;
while(temp!=0)
{
digit=temp%10;
rev=rev*10+digit;
temp=temp/10;
}
if(num==rev)
printf("the number %d is palindrome",num);  
else
printf("The no %d is not a palindrome no",num);
  }
