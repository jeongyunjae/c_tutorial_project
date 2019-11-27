#include<stdio.h>

#define PRINT_FLOAT(num1, num2) printf("%.1f %.1f", (num1), (num2))
int main(){
    float src1, src2;

    scanf("%f %f", &src1, &src2);
    PRINT_FLOAT(src1 + src2, src1 - src2);
    return 0;
}
