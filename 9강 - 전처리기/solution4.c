#include<stdio.h>
#include<string.h>
int main(){
    #ifdef START
    printf("있음");
    #else
    printf("없음");
    #endif
    return 0;
}
