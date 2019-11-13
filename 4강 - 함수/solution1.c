#include<stdio.h>
#include<stdlib.h>

int remainder(int a, int b){
  if(a<=b)
  return b%a;
  else
  return a%b;
}


int main(void){
  int a,b,result;
  printf("두 정수를 입력하십시오\n");
  scanf("%d %d",&a,&b);
  if(a==0 || b==0){
      printf("0이 입력되었습니다. 프로그램을 종료합니다.");
      exit(0);
  }
  result = remainder(a,b);
  if(a<=b)
  printf("%d를 %d로 나눈 나머지는 %d입니다.",b,a,result);
  else
  printf("%d를 %d로 나눈 나머지는 %d입니다.",a,b,result);
  return 0;
}

