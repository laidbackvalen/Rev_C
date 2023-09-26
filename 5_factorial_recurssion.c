#include<stdio.h>

int factorial(int n);

int main(){
    
    int num = 5;

   printf("The Factorial Of %d Is %d \n", num, factorial(num));

    return 0;
}

int factorial(int n){
    

    if(n==1 || n==0 ){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}