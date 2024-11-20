#include <stdio.h>
int main() {
    int i = 5; //0101
    int k = 2; //0010
    printf("value of i=%d k=%d before swapping\n", i, k);
    i = i ^ k; //0111
    k = i ^ k; //0101
    i = i ^ k; //0010
    printf("value of i=%d k=%d after swapping\n", i, k);
    return 0;
}