# include <stdio.h>

float tinhTienDien(int soDien){
    float tien;

    if (soDien <= 100){
        tien = soDien * 500;
    } else if (soDien <= 350) {
        tien = 100 * 500 + (soDien- 100) * 550;
    } else if (soDien <= 650) {
        tien = 100 * 500 + 250 * 550 + (soDien - 350) * 650;
    } else {
        tien = 100 * 500 + 250 * 550 + 300 * 650 + (soDien - 650) * 650;
    }
    return tien;
}

int main () {
    int SoDien;
    printf("Nhập số điện tiêu thụ (kwh):");
    scanf("%d", &soDien);

    if (soDien < 0) {
        printf("Số điện không hợp lệ!\n");
        return 0;
    }
    float tien = tinhTienDien(soDien);
    printf("Số tiền điện phải trả: %.0f dong\n",tien);

    return 0;
}
