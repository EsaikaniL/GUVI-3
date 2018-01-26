
#include <stdio.h>
#include <string.h>
int main() {
	char t[55] = "mom";
	char k[55];
	strcpy(k,t);
	strrev(k);
	if(strcmp(t,k) == 0)
		printf("palindrome.\n",k);
	else
		printf("The entered string %s is not a palindrome.\n",k);
	return 0;
  }
