#include<stdio.h>

void sum_and_diff(int , int, int *, int *);

int main(){
int a, b;
int sum, diff;

printf("a,b를 입력하시오");
scanf("%d %d", &a,&b);
sum_and_diff(a,b, &sum ,&diff);

printf("a와 b의 합은 %d입니다.\n",sum);
printf("a와 b의 차는 %d입니다.\n",diff);
}

void sum_and_diff(int a, int b, int *sum, int *diff){
  *sum = a+b;
  if(a<=b)
  *diff = b-a;
  else
  *diff = a-b;
}

