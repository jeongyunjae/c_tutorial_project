#include<stdio.h>
int main(){
    int num;

    scanf("%d", &num);
    switch (num/10) {
        case 10:
        case 9: printf("A"); break;
        case 8:
        case 7: printf("B"); break;
        default: printf("C"); break;
    }
    return 0;
}
