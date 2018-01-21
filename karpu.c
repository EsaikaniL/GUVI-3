#include <stdio.h>
#include<string.h>
int main() 
{
	char k[55];
	int n,j;
	scanf("%[^\t\n]s",k);
	n=strlen(k);
	for(j=0;j<n;j++)
    {
        if(k[0]>90)
        {
            k[0]=k[0]-32;
        }
        else if(k[j]==' ')
        {
            if(k[j+1]>90)
            {
                k[j+1]=k[j+1]-32;
            }
        }
    }
    printf("%s",k);
	return 0;
}
