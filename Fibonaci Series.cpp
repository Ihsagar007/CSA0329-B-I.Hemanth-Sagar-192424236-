#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next, sum = 0;
    printf("Enter the maximum value of the Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci Series up to %d:\n", limit);
    while (a <= limit) {
        printf("%d ", a);
        sum += a;
        next = a + b;
        a = b;
        b = next;
    }
    printf("\nSum of the Fibonacci series up to %d is: %d\n", limit, sum);

    return 0;
}
