#include<stdio.h>

int main(){
    
    //NORMAL WAY TO INITIALSIE AND DECLARE STRING

    // char string[] = {'V','a','l','e','n','\0'}; //here the "\0" is used to terminate string
    
    //BETTER WAY TO INITIALSIE AND DECLARE STRING

    char string[] = "valen";
    for(int i = 0; i<5; i++){
    printf("%c", string[i]);
    }

    return 0;
}