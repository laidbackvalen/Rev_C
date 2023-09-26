#include<stdio.h>

int main(){
    
    int number;
    
    printf("Enter The Number Whether To Check If Its Even Or Odd \n");
    scanf("%d", &number);

    if(number%2==0){
        printf("The Number '%d' Is Even", number);

    }
    else{
        printf("The Number '%d' Is Odd", number);
    }
    return 0;
}