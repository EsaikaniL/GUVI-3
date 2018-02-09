 #include <stdio.h>
 int main() 
{
    char a[10];
    int i;
    gets(a);
    for(i=0;i<1;i++)
    {
        if(a[i]>='1'&& a[i]<='9'||a[i]>='a'&& a[i]<='z')
    { printf("yes");
    }else
    {printf("no");}
    }
    return 0;
}
