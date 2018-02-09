 #include <stdio.h>
 int main() 
{
    int t = 18;
    int k = 24;
    printf(" %d %d before swapping \n", t, k);
    t = t ^ k;
    k = t ^ k;
    t = t ^ k;
    printf(" %d %d after swapping", t, k);
    return 0;
}
