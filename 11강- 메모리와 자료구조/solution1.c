#include<stdio.h>

void static_check(){
    static int num = 1;
    printf("%d\n", num);
    num *= 2;
}
int main(){
    int num;

    scanf("%d", &num);
    while(num--) static_check();

    return 0;
}
