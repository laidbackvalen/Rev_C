#include<stdio.h>

int main(){
    
    char str1[30];
    char str2[30];
    char c;
    int i = 0;
    printf("Enter The Value Of String1 \n");
    gets(str1);

    // printf("The Value Of String One Is %s \n", str1);

    // printf("Enter The Value Of String2 \n");
    // scanf("%s", str2);
    // //puts(str2);
    

    while(c!='\n'){
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i-1] = '\0';

   
    printf("The Value Of String1 Is '%s' \n", str1);
    printf("The Value Of String2 character by character Is '%s' \n", str2);
    return 0;
}