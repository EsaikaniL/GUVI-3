#include <stdio.h>
 int main() 
{
    int t = 18;
    int k = 24,temp;
    printf(" %d %d before swapping \n", t, k);
    temp = t ;
    t = k;
    k= temp;
    printf(" %d %d after swapping", t, k);
    return 0;
}
