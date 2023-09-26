#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int guess;
    int nguesses = 1;
    int number;
    srand(time(0));
    number=rand()%100+1; //better run this program chaning the attributes in this line
                         //rand()%100 will return random numbers between 100 and 
                         // +1 is from where the randon numbers starts to show up
                         // if you set rand()%100 to 20,
                         //the random number starts to show numbers from 20 to 120.

    printf("the number is %d \n", number);

    //WE WILL USE LOOP TO KEEP RUNNING THE PROGRAM  TILL THE CONDITION METS

    do{
        printf("Guess The Number \n");
        scanf("%d", &guess);
        
        if(guess<number){
            printf("Higher Guess Please! \n");
        }
        else if(guess>number){
            printf("Lower Guess Please! \n");
        }
        else{
            printf("You Have Guessed The Number In %d Attempts \n", nguesses);
        }

        nguesses++;

    }while(nguesses!=number);

    return 0;
}