#include <stdio.h>

void inFibonacci(int n) {
    int n;

    printf("Nhập n: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    printf("Dãy Fibonacci nhỏ hơn %d là:\n", n);

    if (a < n) {
        printf("%d ", a);
    }
    if (b < n) {
        printf("%d ", b);
    }

    while (1) {
        c = a + b;
        if (c >= n) {
            break;
        }
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}