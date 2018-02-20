#include <stdio.h>

int main() 
{
    int t= 65;
    int k = 120;
    printf(" value of t=%d k=%d before swapping", t, k);

    t = t ^ k;
    k = t ^ k;
    t = t ^ k;
    printf("value of t=%d k=%d after swapping", t, k);

    return 0;
}

