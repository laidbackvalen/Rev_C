#include<stdio.h>
#include<math.h>


int main(){

    int num1;
    int num2;
    
    

    printf("Enter Your First Number \n");
    scanf("%d", &num1);
    printf("Enter Your Second Number \n");
    scanf("%d", &num2);

    printf("\n");

    printf("The Addition Of Given Number Is %d\n", num1+num2);
    printf("The Subtraction Of Given Number Is %d\n", num1-num2);
    printf("The Multiplication Of Given Number Is %d\n", num1*num2);
    printf("The Division Of Given Number Is %d\n", num1/num2);
    printf("The Remainder When These Two Number Divides %d\n", num1%num2);
    printf("Number1 To The Power Number2 %f\n", pow(num1, num2));
    
    return 0;
}