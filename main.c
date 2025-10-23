#include "mylib.h"

void menu(){
    printf("*** MENU ***\n");
    printf("1- Xem ngay cua thang\n");
    printf("2- Kiem tra nam nhuan\n");
    printf("3- Giai Phuong trinh bac 2\n");
    printf("4- Xep loai dua tren diem trung binh\n");
    printf("5- Tinh tien dien\n");
    printf("6- Bang cuu chuong\n");
    printf("7- Tinh giai thua\n");
    printf("8- Hien thi\n");
    printf("9- Nhap tu 1 den N\n");
    printf("10- Fibonacci\n");
    printf("11- in Cay Thong bang dau *\n");
    printf("------------------\n");
    printf("chon STT chuc nang: \n");
    printf("------------------\n");
    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        xemthang();
        menu();
        break;
    case 2:
        namnhuan();
        menu();
        break;
    case 3:
        giaiPTBac2();
        menu();
        break;
    case 4:
        xepLoai();
        menu();
        break;
    case 5:
        tinhTienDien();
        menu();
        break;
    case 6:
        inBangCuChuong();
        menu();
        break;
    case 7:
        tinhGiaiThua();
        menu();
        break;
    case 8:
        hienthi();
        menu();
        break;
    case 9:
        nhapTu1DenN();
        menu();
        break;
    case 10:
        inFibonacci();
        menu();
        break;
    case 11:
        inCayThong();
        menu();
        break;
    default:
        menu();
        break;
    }

}

int main(){
    menu();
    return 0;
}
