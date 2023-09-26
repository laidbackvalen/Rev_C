#include<stdio.h>

int main(){
    
    int student = 3;
    int subjects = 5;

    int marks[3][5];
    for(int i = 0; i<student; i++){
        for(int j = 0; j<subjects; j++){
            printf("Enter The Marks Of Student %d In Subject %d :", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
        printf("\n");
        
        
    }
     for(int i = 0; i<student; i++){
        for(int j = 0; j<subjects; j++){
            printf("The Marks Obtained By Student %d In Subject %d Is: %d \n", i+1, j+1, marks[i][j]);
        }
        printf("\n");

}

    return 0;
}