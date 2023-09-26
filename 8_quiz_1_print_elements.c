#include<stdio.h>

int main(){
    
    //char string[] = {'V','a','l','e','n', '\0'};  //Never Forgot to use  "  '\0'  " this will terminate the string
                                                    // not using '\0' will not terminate the string and return false value 

    char string[] = "valen";

    for(int i = 0; i<5; i++){
    printf( "%c", string[i]);
    }
    
    printf("\n");  
    //another way

    char *ptr;
    ptr = &string[0];

    while(*ptr != '\0' ){ 
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}