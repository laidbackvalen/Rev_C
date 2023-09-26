#include<stdio.h>
#include<stdlib.h> //this header file is pre_defined and is used to include library function like here we called "rand()"
#include<time.h>

int main(){
    int number;
    srand(time(0));      //srand is used to set values for the "rand()" function
                        //time.h  //time(0) is set as a value to the "rand()" function, which gives 
                       //random values everytime we execute the code

    number = rand();   //stdlib.h  // rand() is used to get us a random number

    printf("enter the number %d", number);
    return 0;
}