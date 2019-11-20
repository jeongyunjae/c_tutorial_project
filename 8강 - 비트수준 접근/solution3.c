#include<stdio.h>

int main(){
  int num;
  int result;
  printf("정수를 입력하시오:");
  scanf("%d",&num);
  result = ~num+1;
  printf("%d",result);
}

