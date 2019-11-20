#include <stdio.h>

int factorial(int n){
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main(void){
  int a;
  scanf("%d",&a);
printf("%d!는 %d입니다.",a,factorial(a));
    return 0;
}

