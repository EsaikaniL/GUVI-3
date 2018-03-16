#include <stdio.h>
int main() 
{
	int l,b,h,k,a;
	scanf("%d%d%d",&l,&b,&h);
	k=l*b*h;
	a= 2*((l*b)+(b*h)+(h*l));
	printf("%d\n",k);
	printf("%d",a);
	return 0;
}
