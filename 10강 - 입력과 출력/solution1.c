#include<stdio.h>

int main(){
  FILE *fp;
  fp = fopen("C:\\Users\\user\\Desktop\\example.txt", "wt");
  if (fp == NULL) {
    printf("false\n");
    return 1;
  }
  fprintf(fp, "hello my name is git!");
  fclose(fp);
  printf("good\n");
  return 0;
}
