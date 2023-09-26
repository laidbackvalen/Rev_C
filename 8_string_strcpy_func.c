#include<stdio.h>
#include<string.h>

int main(){
    
    char source_1[] = "Patel";
    char target_2[20];

    strcpy(target_2, source_1); //strcpy is used to copy a string from source to target

    printf("Now The Target Is '%s'", target_2);

    return 0;
}