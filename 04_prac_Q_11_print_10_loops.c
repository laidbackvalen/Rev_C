#include <stdio.h>

int main(){
    
    int i = 1;
    int num;
    int count = 0;
    printf("enter the number \n");
    scanf("%d", &num);
    
    // while(i<=num){
        
    //     if(num%i==0){
    //     count++;

    //     }
    //     i++;
    // }
    
    // if(count ==2){
    //     printf("the number is prime");
    // }
    // else {
    //     printf("the number is not prime");
    // }

    do{
        if(num%i==0){
       count++;

        }
       i++;
    }while(i<=num);

     if(count ==2){
         printf("the number is prime");
     }
     else {
         printf("the number is not prime");
     }
    return 0;
}
