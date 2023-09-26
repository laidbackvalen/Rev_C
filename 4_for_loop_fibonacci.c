#include<stdio.h>

// for best explanation, go through the link by commenting it out https://www.youtube.com/watch?v=I_faTZ5RZXU
int main(){
    
    int nth_number;
    
    printf("Enter The Nth Of Fibonacci Series That You Want :");
    scanf("%d", &nth_number);
    
    //fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,…
    //In fibonacci series, the sum of previous two numbers is the next occuring number of the series
    
    //like if we take 
    //first_fibo_no a = "0", 
    //second_fibo_no b = "1",
    //than third_fibo_no c will be  a + b = 1
    
    //like that if we want b we will add a whic is 0 with a previous number 1
    //that will make second_fibo_no b = a + 1, 0 + 1 = 1

    //like that the first_fibo_no a came by -1 + 1 = 0  


    int a = -1;  //initialising a = -1 & b = 1 as per the above method & and setting initial values as per the fibonacci series formula 
    int b = 1;
    int c;      //initialising c as it will be the sum of previous two numbers occuring in the fibonacci series
    
    for(int i = 1; i<=nth_number; i++){
        
        c = a + b;  //c is the addition of previous two digits in the fibo series
        
        printf("%d  ", c);
                  
        //after c is printed, a will be promoted to b and b will be promoted to c

        //like for first_fibo_no   we did  -1 + 1   //where  a =-1,  b = 1  which gives   c =  0
        //like for second_fibo_no  we did   0 + 1   //where  a = 0,  b = 1  which gives   c =  1
        //like for third_fibo_no   we did   1 + 1   //where  a = 1,  b = 1  which gives   c =  2
        //like for fourth_fibo_no  we did   1 + 2   //where  a = 1,  b = 2  which gives   c =  3
        //like for fifth_fibo_no   we did   2 + 3   //where  a = 2,  b = 3  which gives   c =  5
        
        a = b;   //a was -1 which will be promoted to b which is 1
        b = c;  //b will be promoted to c which is 0
               //to make a & b next number of fibonacci series to get the sum of next two numbers

    }

    return 0;
}