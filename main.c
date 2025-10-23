#include "mylib.h"

void menu(){
    printf("*** MENU ***\n");
    printf("1- Xem ngay cua thang\n");
    printf("2- Kiem tra nam nhuan\n");

    printf("10- In day Fibonacci\n");
    printf("11- In cay thong\n");

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
