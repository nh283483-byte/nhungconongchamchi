#include<stdio.h>

//Hàm tính giai thừa 
long long tinhGiaiThua(int n){
    long long gt=1;
    for(int i=1; i<=n; i++){
        gt*=i;
    }
    return gt;
}

int main(){
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);

    if(n<0){
        printf("Khong ton tai giai thua cho so am!\n");
    } else{
        printf("%d!=%d\n",n,tinhGiaiThua(n));
    }
    return 0;
}
