#include <stdio.h>
int main() 
{
	char c;
	char a,e,i,o,u;
	scanf("%s",&c);
	if((c==a)||(c==e)||(c==i)||(c==o)||(c==u))
	{
printf("%s cantain vowels",c);
}
	else
  {
	printf("%s does not contain any vowels",c);
  }
	return 0;
}
