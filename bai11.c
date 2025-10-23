#include <stdio.h>

void inCayThong(int N) { 
    int N;

    printf("Nhap chieu cao N cua cay thong: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {    
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }            
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }             
        printf("\n");
    }
}
