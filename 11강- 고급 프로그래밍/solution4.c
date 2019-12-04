#include<stdio.h>
#include<stdlib.h>

typedef struct test{
    float num;
    struct test *next;
}test;

void print_reverse(test *cur){
    if(cur == NULL) return;
    else{
        print_reverse(cur->next);
        printf("%.2f\n", cur->num);
        free(cur);
    }
}
int main(){
    int num;
    test *head = NULL, *pos;

    scanf("%d", &num);
    while(num--){
        test *temp = malloc(sizeof(test)*1);
        scanf("%f", &(temp->num));
        temp->next = NULL;
        if(head == NULL) head = temp;
        else{
            test *cur = head;
            while(cur->next != NULL) cur = cur->next;
            cur->next = temp;
        }
    }
    print_reverse(head);

    return 0;
}
