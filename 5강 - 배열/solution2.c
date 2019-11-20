#include<stdio.h>
int main(){
    int arr[5], sum = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("%d %.2f", sum, sum/5.0);
    return 0;
}
