#include<stdio.h>
int main(){
    int num;

    printf("Enter The Number \n");
    scanf("%d", &num);

    printf("the Quotient will be %d\n", (num/97));
    printf("the Remainder will be %d\n", (num%97));
    return 0;
}