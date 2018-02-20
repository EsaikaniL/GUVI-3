#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,tk;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("fibanoci series");
    for(i=1;i<=n;i++)
    {
        printf("%d",t1);
        tk=t1+t2;
        t1=t2;
        t2=tk;
    }
    return 0;
}
