#include<stdio.h>
    void main()
    {
    	int a[9],b,i;
    	for(i=0;i<=9;i++)
    	{
    	    scanf("%d",&a[i]);
    	}
    	b=a[0];
    	for(i=0;i<=9;i++)
    	{
    		if(a[i]>b)
    		{
    	b=a[i];
    	}
    }
    
    printf("%d",b);
   return 0;
    }
