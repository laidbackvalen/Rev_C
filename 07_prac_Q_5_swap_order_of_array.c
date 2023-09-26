#include<stdio.h>

void reverse(int *array, int n);

int main(){
    int array[]={1,2,3,4,5,6,7};

    for(int i = 0; i<7; i++){
        printf("the value of %d element is %d before swap \n", i, array[i]);
    }
    printf("\n");

    reverse(array, 7);  //function call
    
    for(int i = 0; i<7; i++){
        printf("the value of %d element is %d after swap \n", i, array[i]);
    }
    return 0;
}

void reverse(int *array, int n){
    for(int i = 0; i<(n/2); i++){
        int temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
}