#include<stdio.h>

int main(){

    // PRIME NUMBER IS A NUMBER WHICH IS DIVIDED BY THE NUMBER ITSELF AND 1.
    // SO THE NUMBER WHICH IS DIVIDED BY ONLY 2 NUMBERS, THE NUMBER ITSELF AND 1. FOR EX - 2,3,5,7,11.
    

    int i;                            //DECLARING VARIABLES          
    int count = 0;
    int num;

    printf("Enter The Number \n");   //ASKING FOR INPUT
    scanf("%d", &num);               //TAKING INPUT FROM USER

    for(int i =1; i<=num; i++){      // i = 1, 1<=5, i++ MEANS 1+1
        
        if(num%i==0){                //CONDITION IF NUM / 2 LEAVES REMAINDER 0, WHICH MEANS DIVIDES COMPLETELY FOR EX - 2/2 = 0
            count++;                 //COUNT WILL COUNT THE NUMBER OF TIMES "num" IS DIVIDED BY "i" COMPLETELY
                                     //WHENEVER THE COUNT FINDS THE "num" IS DIVIDED BY "i" COMPLETELY, THE COUNT WILL INCREMENT BY ONE
        }                            // COUNT++ MEANS "count + 1"

    }
    if(count==2){                   //THIS CONDITION CHECKS IF "num" IS DIVIDED BY "i" 2 TIMES 
                                    //THE COUNT IS USED TO CHECK BY HOW MANY NUMBERS FROM 1 TO NUM, THE "num" IS DIVIDED COMPLETELY
        printf("the number is prime");

    }
    else{
        printf("the number is not prime");
    }
    
    return 0;
}