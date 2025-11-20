#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Sum factors up to n/2
    for(i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }

    // Check for perfect number
    if(sum == n)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is NOT a Perfect Number.\n", n);

    return 0;
}