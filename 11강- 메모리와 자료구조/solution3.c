#include<stdio.h>
#include<stdlib.h>

typedef struct test{
    float num;
    struct test *next;
}test;

int main(){
    int num;
    test *head = NULL, *pos;

    scanf("%d", &num);
    while(num--){
        test *temp = malloc(sizeof(test)*1);
        temp->next = NULL;
        scanf("%f", &(temp->num));
        if(head == NULL) head = temp;
        else{
            test *cur = head;
            while(cur->next != NULL) cur = cur->next;
            cur->next = temp;
        }
    }
    pos = head;
    while(pos != NULL){
        printf("%.2f\n", pos->num);
        head = pos;
        pos = pos->next;
        free(head);
    }

    return 0;
}
