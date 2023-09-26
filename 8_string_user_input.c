#include<stdio.h>

int main(){
    
    char st[30];
    char str[30];
    char string[30];
    
    printf("\n");

    printf("Enter Your First Name: ");
    scanf("%s", st);
    printf("Enter Your Father Name: ");
    scanf("%s", str);
    printf("Enter Your Surname Name: ");
    scanf("%s", string);

    printf("\n");

    printf("Your Name : %s %s %s", st, str, string);
    return 0;
}