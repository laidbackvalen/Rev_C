#include<stdio.h>

void print_address(int a);

int main(){
    int i =3;
    printf("the value of i is %d \n", i);
    printf("the value of i is %u \n", &i);
    print_address(i);
    return 0;
}
void print_address(int a){
    printf("the value of i is %u\n", &a);
   
}