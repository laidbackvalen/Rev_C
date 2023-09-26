#include<stdio.h>
 
int main(){

    int i=1;

    do{
        printf("%d \n", i);
        if(i==16){
            break;
        }
        i++;

    }while(i<=20);
    return 0;
}