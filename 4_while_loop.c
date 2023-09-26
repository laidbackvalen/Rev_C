#include<stdio.h>

int main(){
    
    int a;

    printf("Enter The value Of A \n");
    scanf("%d", &a);

    while(a<10){
        printf("%d \n", a);
        a++;
    }

    return 0;
}