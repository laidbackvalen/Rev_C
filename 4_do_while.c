#include<stdio.h>

int main(){

    int i =1;

    do{                                     //this loop is use to execute atleast once
    printf("the value of i is %d \n", i);   //the condition will be check after the once execution; 
    i++;
    }while(i<=10);
    
    return 0;
}