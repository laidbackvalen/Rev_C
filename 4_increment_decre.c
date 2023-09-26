#include<stdio.h>

int main(){

    int i=5;

    printf("the value of i is %d \n", i++);
    ++i;

    printf("the value of i is %d \n", ++i);
    i++;
    
    printf("the value of i is %d \n", i++);
    
    printf("the value of i is %d \n",i+=10);
       

    return 0;
}