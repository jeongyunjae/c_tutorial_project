#include <stdio.h>

int main(){
    unsigned char num1 = 32;
    num1 = num1 >> 4 << 1;
    printf("결과 값은 %u\n", num1);
    return 0;
}
