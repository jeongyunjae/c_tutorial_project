#include<stdio.h>
#include<stdlib.h>

typedef struct test{
    int num;
    char text;
}test;

int main(){
    test *temp = malloc(sizeof(test)*1);

    scanf("%d %c", &(temp->num), &(temp->text));
    printf("정수 데이터: %d\n", temp->num);
    printf("문자 데이터: %c", temp->text);
    free(temp);

    return 0;
}
