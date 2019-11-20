#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copy_to_phonenum(char *,char *, char *, char **);

int main(){
char a[20],b[20],c[30];
char **phone_book;
phone_book = (char**)malloc(0);
for (int i = 0;i<3;i++)
        phone_book[i] = (char*)malloc(sizeof(char)*100);
printf("3명의 핸드폰 번호를 입력하십시오\n");
scanf("%s %s %s",a,b,c);
copy_to_phonenum(a,b,c,phone_book);
for(int i = 0;i<3;i++){
  printf("%s\n",phone_book[i]);
}
}

void copy_to_phonenum(char *a, char *b, char *c, char **p){
    strcpy(p[0],a);
    strcpy(p[1],b);
    strcpy(p[2],c);
  }

