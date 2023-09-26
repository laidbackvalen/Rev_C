#include<stdio.h>

void display(); //FUNCTION PROTOTYPE
                //FUNCTION PROTOTYPE TELLS THE COMPILER ABOUT THE FUNCTION 

int main(){
    
    int a;
    printf(" 1 \n");
    display();  //FUNCTION CALL
    printf(" 3 \n");
    return 0;
}
//FUNCTION DEFINATION
void display(){ 
    printf(" 2 \n");
}