#include <stdio.h>
// Hàm tính điểm trung bình cuối kỳ
float tinhDiemTrungBinh(float van, float toan, float anh) {
    return (van * 2 + toan * 2 + anh) / 5;
}
// Hàm xếp loại học lực
void xepLoai(float diemTB) {
    if (diemTB < 3.0)
        printf("Hoc luc: Yeu\n");
    else if (diemTB < 5.0)
        printf("Hoc luc: Trung binh\n");
    else if (diemTB < 7.9)
        printf("Hoc luc: Kha\n");
    else
        printf("Hoc luc: Gioi\n");
}
int main() {
    float van, toan, anh;
    printf("Nhap diem mon Van: ");
    scanf("%f", &van);
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Anh Van: ");
    scanf("%f", &anh);
    float diemTB = tinhDiemTrungBinh(van, toan, anh);
    printf("\nDiem trung binh cuoi ky = %.2f\n", diemTB);
    xepLoai(diemTB);
    return 0;
}