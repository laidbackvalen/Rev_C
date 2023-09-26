#include<stdio.h>

int main(){
    
    char *ptr = "valen patel";  //using pointer

   // char ptr[] = "valen patel";  //using arrays  //once a char is define using array it cannot be 
                                   //reinitiailise to anything else
    

    //a string define using *ptr can be reinitialise to something else
    ptr = "valen rajubhai patel";  //here the values changes
    printf("%s \n", ptr);

    printf("%u", &ptr);

    return 0;
}