#include<stdio.h>

int main(){
    

    int num1;
    int num2;
    int num3;
    int num4;


    printf("Enter The Value Of Number 1 \n");
    scanf("%d", &num1);
    printf("Enter The Value Of Number 2 \n");
    scanf("%d", &num2);
    printf("Enter The Value Of Number 3 \n");
    scanf("%d", &num3);
    printf("Enter The Value Of Number 4 \n");
    scanf("%d", &num4);

    
    if(num1>num2){
            if(num1>num3){
                if(num1>num4){
                    printf("%d Is The Biggest", num1);
                }
                else{
                    printf("%d Is The Biggest Number", num4);
                }
            }   
    }


    else if(num2>num3){
            if(num2>num4){
                printf("%d Is The Biggest", num2);
        }
            else{
                printf("%d Is The Biggest", num4);
            }
    }


    else if(num3>num4){
           printf("%d Is The Biggest", num3);
    }
    else{
        printf("%d Is The Biggest", num4);
    }

    
    return 0;
}