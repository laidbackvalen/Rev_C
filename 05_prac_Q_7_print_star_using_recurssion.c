#include<stdio.h>

   int print_pattern(int num); //function declaration




   int main(){

   int number;

   printf("Enter The Number Of Stars You Want To See As In Rows And Column \n");
   scanf("%d", &number);
   printf("\n");
   pattern(number);  //function call

       return 0;
   }


   int print_pattern(int num){   //function defination

      if(num>0){

      print_pattern(num-1);
      printf("*");

   }
}
   int pattern(int num){

      if(num>0){
      pattern(num-1); //will recursively print the pattern
   
   }

   print_pattern(num); //will reduce the n recursively.
   printf("\n");

}