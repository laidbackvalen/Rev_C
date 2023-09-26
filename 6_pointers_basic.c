#include<stdio.h>


int main(){

    int i = 36;
    int *j= &i; //*j denotes pointer which holds the address of i;
    int **k=&j;
     printf(" 1 The Value Of i Is %d \n", i);
     printf(" 2 this shows where the I is stored in the memory %u \n", &i); //%u is a format specifier for pointer's address
     printf(" 3 The Value Of i using pointer %d \n",*j);                   //*j is use as a pointer which stores the address of i
                                                                       //*j will return the value of "i"
     printf(" 4 The adress of i Is %d \n", j);  //j is just an actual memory address
     printf(" 5 The adress of i Is %u \n", j);  
     printf(" 6 The adress of j Is %u \n", &j); //address of j 
     printf(" 7 The Value Of j Is %u \n", *(&j)); // value of j is address of i  
     printf(" 8 The adress of k Is %u \n", k);  
     printf(" 9 The adress of k Is %u \n", &k);  

     
    return 0;
}