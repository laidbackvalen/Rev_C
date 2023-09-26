#include<stdio.h> //header file
#include<string.h>  //for strlen function we need to include <string.h> 

int main(){
    
    char *ptr = "valenRP";
    int a = strlen(ptr);  //strlen() function is used to count the number of character
                          //in the string excluding the null character "\0".

    puts(ptr);
    printf("The Length Of String Is %d \n", a);
    printf("The Number Of Characters In The String Is %d", a);

    return 0;
}