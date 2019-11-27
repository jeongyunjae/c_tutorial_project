#include<stdio.h>

#define PRINT_INFO(src) printf("변수이름 = %s, 값 = %s", #src, src)
int main(){
    char study[12];

    scanf("%s", study);
    PRINT_INFO(study);
    return 0;
}
