 #include<stdio.h>
 void printarray(int p[], int n)
  {
 int s;
for ( s = 0; s < n; s++)
printf("%d ", p[s]);
printf("\n");
}
void partition(int n)
{
int p[n]; 
        int z = 0;  
        p[z] = n; 
        int rem_val;
        while (1)
        {
        printarray(p, z+1);
        rem_val = 0;
while (z >= 0 && p[z] == 1)
{
rem_val += p[z];
 z--;
 }
 if (z < 0)  return;
 p[z]--;
 rem_val++;
 while (rem_val > p[z])
{
p[z+1] = p[z];
rem_val = rem_val - p[z];
 z++;
}
p[z+1] = rem_val;
z++;
 }
 }
int main()
 {
int num;
printf("\nEnter a number to perform integer partition: ");
canf("%d", &num);
partition(num);
}
