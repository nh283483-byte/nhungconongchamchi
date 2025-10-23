#include <stdio.h>
#include <math.h>

void giaiPTBac2(float a, float b, float c) {
    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                printf("Phương trình có số nghiệm.\n");
            else
             printf("Phương trình vô nghiệm.\n");
            } else {
                float x = -c/b
                printf("Phương trình bậc nhất, có nghiệm x = %.2f\n",x);
            }
        } else {
            float delta = b*b - 4*a*c;
            if (delta < 0) {
                printf("Phương trình vô nghiệm");
            } else if (delta == 0){
                 float x =-b / (2*a)
                printf("Phương tình có nghiệm kép x1=x2=%.2f\n",x);
            } else {
                float x1 = (-b + sqrt(delta)) / (2*a);
                float x2 = (-b - sqrt(delta)) / (2*a);
                printf("Phương trình có hai nghiệm phân biệt:\n");
                printf("x1 = %.2f\n", x1)
                printf("x2 = %.2f\n", x2);
            }
        }
    }
}

int main () {
    printf("Nhập hệ số a: ");
    scanf("%f", &a);
    printf("Nhập hệ số b: ");
    scanf("%f", &b);
    printf("Nhập hệ số c: ");
    scanf("%f", &c);
    
    giaiPTBac2 (a,b,c);
    return 0;
}
