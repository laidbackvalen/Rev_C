#include<stdio.h>

// int main(){

//     int marks[5];

//     printf("Enter Marks Obtained By Student 1: ");
//     scanf("%d", &marks[0]);
//     printf("Enter Marks Obtained By Student 2: ");
//     scanf("%d", &marks[1]);
//     printf("Enter Marks Obtained By Student 3: ");
//     scanf("%d", &marks[2]);
//     printf("Enter Marks Obtained By Student 4: ");
//     scanf("%d", &marks[3]);
//     printf("Enter Marks Obtained By Student 5: ");
//     scanf("%d", &marks[4]);

//     printf("\n");

//     printf("The Marks Obtained By Student 1: %d \n", marks[0]);
//     printf("The Marks Obtained By Student 2: %d \n", marks[1]);
//     printf("The Marks Obtained By Student 3: %d \n", marks[2]);
//     printf("The Marks Obtained By Student 4: %d \n", marks[3]);
//     printf("The Marks Obtained By Student 5: %d \n", marks[4]);
//     return 0;
// }

//USING FOR LOOPS
//THE BEST WAY

int main(){

    int marks[5]; //ALLOCTING SPACE FOR 5 INT MARKS VARIABLES
     
    for(int i = 0; i<5; i++){  //"i" IS "0" BECAUSE THE INDEX VALUE OF ARRAY IS 0 ALWAYS
        
    printf("Enter Marks Obtained By Student %d: " , i+1); //WE DONT WANT TO SHOW THE EXECUTION 
    scanf("%d", &marks[i]);                               //OF "i" STARTS FROM "0", SO WE HAVE 
                                                          //DONE "i+1"
    } 
    for(int i = 0; i<5; i++){
     printf("The Marks Obtained By Student %d: %d \n",i+1, marks[i]);   
    }

     return 0;
}