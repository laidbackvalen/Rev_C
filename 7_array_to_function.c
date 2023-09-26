#include<stdio.h>

void print_array(int *ptr, int n);

int main(){

    int array[20] = {10,25,30,40,50,60,70};


    print_array(array , 7);

    printf("\n");
    
    printf("%d", array[2]); //this will return the value from function defination
                            //ptr[2] = 22; have the address of array 2;
   
    printf("\n");
    

    for(int i = 0; i < 8; i++){
        printf("The Value Of Element In Array %d is %d \n", i+1, array[i]);  //we can see the pointer[2] changed value at array[2]
    }


    return 0;

}

void print_array(int *ptr, int n){


    for(int i = 0; i < n; i++){

        printf("The Value Of Element In Array %d is %d \n", i+1, *(ptr+i)); //*(ptr+i) refers to the i element of the array 
                                                                            //*(ptr+3) will refer 3rd element of array      
                                                                            //*ptr+i will return *ptr+i which will be 10 as initial than 11, 12, 13...
                                                                            //but *(ptr+i) will return the value at pointer ptr + i, the actual element in array 10,20,30,40....
    }
    
    ptr[2] = 22;
}