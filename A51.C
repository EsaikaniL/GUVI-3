#include <stdio.h>
int main() 
{
	int t,k,m,l,b;
	scanf("%d",&t);
	k=t%10;
	m=t/10;
	l=m%10;
	b=m/10;
	printf("the individual digits are %d\t%d\t%d\t",b,l,k);
	return 0;
}
