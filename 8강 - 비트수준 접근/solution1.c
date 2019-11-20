#include <stdio.h>

int main(){
    unsigned char num1 = 1;
    unsigned char num2 = 5;

    printf("%u\n", num1 | num2);
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 & num2);

    num1 = ~num2;
    printf("%u\n", num1);
}
