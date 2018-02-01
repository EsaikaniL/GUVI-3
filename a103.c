#include <stdio.h>
int main()
{
 char string[100];
 printf("Enter a string to convert it into upper case\n");
 gets(string);
 upper_string(string);
 printf("Entered string in upper case is \"%s\"\n", string);
  return 0;
}
 void upper_string(char t[]) {
   int k = 0;
 while (t[k] != '\0') {
  if (t[k] >= 'a' && t[k] <= 'z') {
  t[k] = t[k] - 32;
   }
   k++;
   }
}
