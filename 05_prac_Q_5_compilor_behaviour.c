#include<stdio.h>

int main(){
    
    int a = 3;

    printf("%d %d %d", a, ++a, a++); //printf function in GCC starts execution from right to left
                                     //it"s compiler's behaviours  //some other compilers like LLVM read from left to right 
    return 0; 
}