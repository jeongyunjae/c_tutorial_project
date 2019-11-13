#include<stdio.h>
int main(){

    for(int i = 1; i <= 7; i++){
        for(int j = 7; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
    // while문
    // int i=1, j=1;
    // while(i <= 7){
    //     j = 7;
    //     while(j >= i){
    //         printf("*");
    //         j--;
    //     }
    //     i++;
    //     printf("\n");
    // }
    return 0;
}
