#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int b,i=0,c;
    gets(a);
    b=strlen(a);
    while(i<b)
    {
    if(a[i]==' ')
    {
     b--;
    }
    i++;
    }
    printf("%d",b);
    return 0;
}
