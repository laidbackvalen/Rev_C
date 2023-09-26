#include<stdio.h>

int main(){
    
    int num;
    printf("What Is The Number \n");
    scanf("%d", &num);

    (num<50)? printf("The Number Is Less Than 50 \n") : printf("The Number Is Greater Than 50 \n");
    return 0;
}