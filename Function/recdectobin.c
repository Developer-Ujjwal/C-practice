#include <stdio.h>

void toBinary(int n) {
    if(n / 2 != 0) {
        toBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Binary of %d is: ", num);
    toBinary(num);
    return 0;
}
