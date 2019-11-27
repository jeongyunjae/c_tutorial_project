#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  FILE *fp;
  char *str;
  str = (char *)malloc(sizeof(char)*100);
  printf("100자 이내의 문자들을 기록하는 프로그램입니다.\n");
  printf("문자열을 입력하세요\n");
  gets(str);

  fp = fopen("C:\\Users\\user\\exam3.txt", "wt");
  if(fp == NULL){
    printf("false\n");
    return 1;
  }
  fprintf(fp, "입력받은 문자열\n");
  fprintf(fp,"%s",str);

  fclose(fp);

  printf("good\n");

}
