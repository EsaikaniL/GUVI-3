#include <stdio.h>
int main() 
{
	int count=0,k;
	char t[50];
	scanf("%[^\n]s",t);
	for(k=0;t[k]!='\0';k++)
	{
		if(t[k]==' ')
		count++;
	}
	printf("%d",count+1);
	return 0;
}
