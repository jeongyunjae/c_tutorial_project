#include<stdio.h>
union test{
    int num1;
    float num2;
};
int main(){
    union test temp;
    int num;

    scanf("%d", &num);
    temp.num1 = num;
    printf("%d", temp.num1);
    return 0;
}
