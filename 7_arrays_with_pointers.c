#include<stdio.h>


int main(){
  
  int marks[4];
  int *ptr;
  ptr = &marks[0];

  for(int i = 0; i<4; i++){

      printf("Enter The Marks Obtained By Student %d: ", i+1);
      scanf("%d", &marks[i]);
    //    ptr++;  //try this commenting in and out;
     printf("the address wher the students marks are being stored is %d \n", ptr);
  }
   printf("\n");

  for(int i = 0; i<4; i++){
      
      printf("The Marks Obtained By The Student %d: %d\n", i+1, marks[i]);
  }
    return 0;
}