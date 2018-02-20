#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int b,i=0,c=1;
    gets(a);
    b=strlen(a);
    while(i<b)
    {
    if(a[i]==' ')
    {
     c++;
    }
    i++;
    }
    printf("%d",c);
    return 0;
}


