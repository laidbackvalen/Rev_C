#include<stdio.h>

int sum(int num);

int main(){

    int number;

    printf("Enter The Number \n");
    scanf("%d", &number);

    printf("The Sum Of First %d Natural Numbers Is %d", number, sum(number));

    return 0;
}

int sum(int num){

    if(num){                     
    return num + sum(num-1);     
    }
    else{
        return 0;
    }
    // int sum =0;
    // int i;
    // for(int i = 1; i<=num; i++){
    //     sum+=i;
    // }
    // return sum;
}
