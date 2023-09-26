#include<stdio.h>

int main(){
    
    
    char *ptr = "Valen Rajubhai Patel"; //char *ptr is used here with %s format specifier 
                                        //to print String.
    printf("%s", ptr);

    printf("\n");

    char string[] = "Valen Kumar Rajubhai Patel"; //another way to print string                                    
    printf("%s", string);

    return 0;
}