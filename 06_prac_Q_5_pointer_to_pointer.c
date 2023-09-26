#include<stdio.h>


int main(){
    int i = 6;
    int *ptr;
    ptr = &i;
    int **ptr2_ptr;
    ptr2_ptr = &ptr;

    printf("the value of i is %d", **ptr2_ptr);

    return 0;
}