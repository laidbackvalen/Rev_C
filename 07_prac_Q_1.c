#include<stdio.h>

int main(){

    int arr[10];

    int *ptr;

    ptr = arr;
    //or *ptr= &arr //both are same

    ptr+=2;
        // printf("these points to the same location %d in the memory \n", ptr+=2); //this will tell you where ptr+=2 is pointing

    if(ptr==&arr[2]){

        printf("these points to the same location in the memory \n");
        printf("these points to the same location %d in the memory", ptr+=2);
    }
    else {
        printf("these do not points to the same location in the memory ");
    }

    return 0;
}