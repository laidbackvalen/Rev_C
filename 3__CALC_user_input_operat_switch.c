#include<stdio.h>

int main(){
    
    int num1;
    int num2;
    char opt;
    float result;
    
    printf("choose operator  '+'  '-'  '*'  '/' \n ");
    scanf("%c", &opt);
    printf("\n");
    printf("\n");

    printf(" \n");
    printf("1st NUMBER : ");
    scanf("%d", &num1);


    printf("  OPERATOR   %c \n", opt);

    printf("2nd NUMBER : ");
    scanf("%d", &num2);
    


    switch(opt){

        case '+':
        result = num1+num2;
        printf("    RESULT   = %f \n", result);
        printf(" \n");
        printf(" \n");
        break;

        case '-':
        result = num1-num2;
        printf("    RESULT   = %f \n", result);
        printf(" \n");
        printf(" \n");
        break;

        case '*':
        result = num1*num2;
        printf("    RESULT   = %f \n", result);
        printf(" \n");
        printf(" \n");
        break;

        case '/':
        if(num2==0){
            printf("2nd NUMBER Cannot Be ZERO");
        }
        result = num1/num2;
        printf("    RESULT   = %f \n", result);
        printf(" \n");
        printf(" \n");
        break;
        

         default:  /* use default to print default message if any condition is not satisfied */  
            printf (" Something is wrong!! Please check the options ");    
    }

    return 0;
}