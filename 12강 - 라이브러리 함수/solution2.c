#include<stdio.h>
#include<string.h>
int main(){
  char a[40], b[40];
  printf("두 문자열을 띄어쓰기 없이 입력하세요\n");
  scanf("%s %s",a,b);
  if(strcmp(a,b)==0)
  printf("같습니다");
  else
  printf("같지않습니다.");
}
