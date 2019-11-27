#include<stdio.h>

int main(){
  FILE *fp;
  int num1, num2;
  printf("1,2 숫자 입력: ");
  scanf("%d %d",&num1,&num2);

  fp = fopen("C:\\Users\\user\\Desktop\\exam2.txt", "wt");
  if(fp == NULL) {
    printf("false\n");
    return 1;
  }
fprintf(fp, "%d와 %d의 사칙연산 결과입니다.\n",num1,num2);
fprintf(fp, "%d + %d = %d\n",num1,num2,num1+num2);
fprintf(fp, "%d - %d = %d\n",num1,num2,num1-num2);
fprintf(fp, "%d * %d = %d\n",num1,num2,num1*num2);
fprintf(fp, "%d / %d = %d\n",num1,num2,num1/num2);

fclose(fp);

printf("good\n");
}
