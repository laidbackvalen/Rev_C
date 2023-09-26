#include<stdio.h>

float avg(int a, int b, int c);

int main(){
    
    int num1;
    int num2;
    int num3;

    printf("Enter Number1 \n");
    scanf("%d", &num1);
    printf("Enter Number2 \n");
    scanf("%d", &num2);
    printf("Enter Number3 \n");
    scanf("%d", &num3);

    printf("The Average Of Your Numbers Is %f", avg(num1, num2, num3));

    return 0;
}

float avg(int a, int b, int c){
    float result;
    result = (float)(a+b+c)/3; //here float will return the answer in decimals after points
    return result;

}