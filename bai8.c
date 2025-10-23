#include <stdio.h>
// Hàm in cây thông
void inCayThong(int N) {
for (int i = 1; i <= N; i++) {
// In khoảng trắng
for (int j = 1; j <= N - i; j++) {
printf(" ");
}
// In dấu *
for (int k = 1; k <= 2 * i - 1; k++) {
printf("*");
}
printf("\n");
}
}
int main() {
int N;
printf("Nhap N: ");
scanf("%d", &N);
inCayThong(N); // Gọi hàm in cây thông
return 0;
}
