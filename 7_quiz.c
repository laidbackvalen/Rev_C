#include<stdio.h>
//wont run
int print_arr( int *student, int *subject);

int main(){
    
    int student;
    int subject;

    
            printf("Enter The number of students: ");
            scanf("%d", &student);
            printf("Enter The number of subjects: ");
            scanf("%d", &subject);
    

    int marks[student][subject];
    
    for(int i = 0; i<student; i++){
        for(int j = 0; j<subject; j++){

            printf("Enter The Marks of a student %d in subject %d \n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    print_arr( student, subject);
return 0;
}


int print_arr(int *subject, int *student, int marks[i][j]){


    

    for(int i = 0; i<student; i++){
        for(int j = 0; j<subject; j++){
            printf("The Marks Obtained By Student %d In Subject %d Is: %d\n", i+1, j+1, *marks[i][j]);
        }
    }