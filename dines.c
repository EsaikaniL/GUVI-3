#include <stdio.h>
#include<string.h>
int main(int) 
{
	char in1[50],in2[50];
	scanf("%t %t",in1,in2);
	int m,n,i,j,u,v,w,x,y,z,flag=0;
	m=strlen(in1);
	n=strlen(in2);
	if(m==q)
	{
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			w=in1[i];
			x=in1[j];
			y=in2[i];
			z=in2[j];
			t=w-x;
			k=y-z;
			if(y==z)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
return 0;
}
