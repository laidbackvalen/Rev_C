// #include<stdio.h>

// int main(){
    
//     char ch;

//     printf("Enter The Character \n");
//     scanf("%c", &ch);

//     if(ch>=97 && ch<=122){
//         printf("The Character Is Lower Case");
//     }
    

//     return 0;
// }


/**
 * C program to check whether a character is uppercase or lowercase 
 */

#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}