#include<stdio.h>

//NOTE
//Using "& address of" operator with Format specifier "%d" or "%u" will return the address, means location in momery
//Using "*" which is pointer with "%d" and "%u" will return you the value of the variable at the address


int main(){
    
    int a = 6;
    int *ptr;  // pointer "*ptr"   * is used to assign a variable to have the address of another variable
    ptr = &a; //pointer "ptr" have the address of a
    
    printf(" 1 The Value Of a is %d \n", a);

    printf(" 2 The Value Of a is %u \n", a); //it will show value of "a" as no address specifies

    printf(" 3 The memory location a is %u \n", &a);//it will show the memory location of "a"
                                    //to know the memory location of a we have to use "&address of" operator 

    printf(" 4 The value stored in a pointer is %u \n", *ptr); //as pointer " *ptr " holds the address of a,
                                                               //it will return the value of a here.
    
    printf(" 5 The Value of pointer is %d \n", *ptr);
    
    printf(" 6 The address of a %d \n", ptr); //this return the address of a
                                                  //you can also use %u "unsigned" format specifier

    printf(" 7 The address Of pointer is %u \n", &ptr); //this will return the address of pointer 
    printf(" 8 The address Of a is %u \n", *(&ptr)); //this will return the address of a
    

    return 0;
}

//  1 The Value Of a is 6 
//  2 The Value Of a is 6 
//  3 The memory location a is 6422220
//  4 The value stored in a pointer is 6
//  5 The Value of pointer is 6
//  6 The address of a 6422220
//  7 The address Of pointer is 6422216
//  8 The address Of a is 6422220