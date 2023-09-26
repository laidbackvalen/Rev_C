#include<stdio.h>

int sum(int a, int b);  //FUNCTION PROTOTYE DECLARATION
                       //a AND b ARE THE PARAMETERS OR THE VARIABLES PLACEHOLDERS

int main(){
    
    int res;
    res = sum(2, 5);   // 2 AND 5 ARE THE ARGUMENTS PASSED TO THE PARAMETER a AND b
    printf("the value of result is %d \n", res);
    res = sum(9, 7);  // FUNCTION CALL HERE AND ABOVE WITH DIFFERENT PARAMETERS 
    printf("the value of result is %d \n", res);

    return 0;   
}
int sum(int a, int b){  //FUNCTION DEFINATION
    int result = a + b;
    return result; // RETURN IS NOT IMPORTANT AS I HAVE CHECKED TILL NOW
}  