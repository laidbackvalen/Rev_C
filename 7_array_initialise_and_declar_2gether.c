#include<stdio.h>

int main(){
    
    //METHOD 1                           //of initialising and declaring the values of the variables
    //for ex:- int array1 = 5;  
             //int array2 = 6;
             //int array3 = 7; 
 

    //METHOD 2  //USES ARRAY     
    //int array[3]={5, 6, 7} is same, both Methods returns the same value     


     
                          
    int array[3]={5, 6, 7}; // we can initialise all 3 variables and declare it's value
                           //using array

    printf("the value of array 1 is %d \n", array[0]);
    printf("the value of array 2 is %d \n", array[1]);
    printf("the value of array 3 is %d \n", array[2]);

    return 0;
}