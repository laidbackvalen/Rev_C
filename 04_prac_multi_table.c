#include<stdio.h>

int main(){
    
    int n;
    int i = 1;
    
    printf("enter the table number \n");
    scanf("%d", &n);



    //FOR LOOP EXAMPLE 
    // for(int i=1; i<=10; i++){

    //     printf("%d x %d = %d \n", n, i, n*i);
    // }




    /*  WHILE LOOP EXAMPLE

    while(i<=10){
        printf("%d x %d = %d \n", n, i, n*i);
        i++;
    }
    
    */




   //DO WILE LOOP EXAMPLE
   
     do{

     printf("%d x %d = %d \n", n, i, n*i);
     i++;

    }while(i<=10);


    return 0;
}