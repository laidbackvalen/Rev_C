#include<stdio.h>
//we have worked with funtions earlier
//the fuction we used are of call by value
//it just doesnt change the arguments in the main() function


void wrong_swap(int a, int b); //call by value
void swap(int *a, int *b); //call by reference

int main(){

    int x = 3, y =7;
    
    printf("The Value of x and y is %d, % d \n", x, y);

    wrong_swap(x,y); //will not work as it doesn't have the address
    printf("The Value of x and y is %d, % d \n", x, y);
    
    swap(&x, &y); //it will work as we have the address and reference
    printf("The Value of x and y is %d, % d \n", x, y);

    return 0;
}
void wrong_swap(int a, int b){
     int temp;
     temp = a;
     a = b;
     b = temp;
}
void swap(int *a, int *b){
     int temp;             //this holds the address of x and y
     temp = *a;
     *a = *b;
     *b = temp;
}