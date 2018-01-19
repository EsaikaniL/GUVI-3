#include <stdio.h>
#include <string.h>
 int main()
{
   char arr[55];
   printf("Enter string \n");
   gets(arr);
   strrev(arr);
   printf("Reverse string \n%s\n",arr);
}
