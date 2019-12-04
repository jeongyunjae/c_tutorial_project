#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char *s1,*s2;
  s1 = (char *)malloc(sizeof(char)*300);
  printf("s1을 입력하세요\n");
  scanf("%[^\n]s",s1);
  s2 = (char *)malloc(sizeof(char));
  strcpy(s2,s1);
  printf("s2: %s",s2);
}
