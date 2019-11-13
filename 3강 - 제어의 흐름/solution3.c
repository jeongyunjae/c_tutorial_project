#include<stdio.h>
int main(){
    int num, flag = 0;

    scanf("%d", &num);
    for(int i = 2; i <= (num-1); i++){
        if(num%i == 0){
            flag = 1;
        }
    }
    // while문
    // int i = 2;
    // while(i <= (num-1)){
    //     if(num%i == 0){
    //         flag = 1;
    //     }
    //     i++;
    // }
    if(flag == 1){
        printf("소수아님");
    }
    if(flag == 0){
        printf("소수");
    }

    return 0;
}
