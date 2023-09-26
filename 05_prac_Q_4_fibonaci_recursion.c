#include<stdio.h>

//for the best explanation go through the link https://www.youtube.com/watch?v=PODvbWRuZ6s

int fibonacci(int num);

int main(){
    
    int num;

    printf("enter the number \n");
    scanf("%d", &num);
    

    for(int i = 1; i <= num; i++){

        printf("%d ", fibonacci(i));

   }

    return 0;
}
int fibonacci(int num){
  
   if (num == 1  || num == 2 ){  //1st and 2nd fibonacci number is 1
      return 1;
      
   }
      else{

   return  fibonacci(num-1) + fibonacci(num-2);
   }
}