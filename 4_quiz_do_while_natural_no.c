#include <stdio.h>

int main(){
    int i=1;             //natural number starts from 1,  here i is the lowest natural number
    int natural_no;      //declaring this variable to take input from user

    printf("How Many First Natural Numbers You Want To Check \n");   //print as it is
    scanf("%d", &natural_no);            //taking input
    

    do{                          //this will start execution after taking input from the user
        printf("%d \n", i);      
        i++;                    //i will be incremeted i+1;

    }while(i<=natural_no);     //after the above lines of code executes, 
                               //the compiler will check the condition.

    return 0;
}