#include<stdio.h>
struct test{
    int num1;
    int num2;
};
int main(){
    struct test temp = {3, 4};

    printf("%d %d", temp.num1, temp.num2);
    return 0;
}
