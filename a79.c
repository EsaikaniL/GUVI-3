#include <stdio.h>

void main() {
	int t,k,m;
	scanf("%d%d",&t,&k);
	m=t*k;
	if(m/t==t)
	printf("%d is the perfect square",m);
	else
	printf("%d is not the perfect square",m);
	return 0;
}
