#include<stdio.h>

//the pointer can be incremented to point to the next memory location
//of that type.


int main(){
    
    int a = 4;    //1 "int" = 4bytes //int is of 4 bytes & float is of 4 bytes aswell
    int *ptr;
    ptr = &a;

    printf("The Address Of a is %u \n", ptr);
    
    ptr++; //ptr = ptr + 1  //where ptr hold the address of a which is "6422216", MAY VARY NEXT TIME WHEN YOU RUN THE PROGRAM
           //here 6422216 = 6422216 + 4 will make the address 6422220

    printf("The Address Of a is %u \n", ptr);
    ptr++;
    printf("The Address Of a is %u \n", ptr);
     
    return 0;
}

// int main(){

//     char c = 34;  // 1 char = 1 byte; char is of 1 byte
//     char *ptr = &c;

//     printf("The Address Of a is %u \n", ptr);
//     ptr++;
//     printf("The Address Of a is %u", ptr);

//     return 0;
// }