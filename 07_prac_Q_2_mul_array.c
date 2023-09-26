#include<stdio.h>
int main(){
    
    int multi_table[10];

    for(int i=0; i<10; i++){
        multi_table[i] = 5*(i+1);
        
        printf("5x%d = %d \n", i+1, multi_table[i]);  //comment out this LINE or the other loop below, 
                                                      //both will return the same answer 
    }
    // for(int i=0; i<10; i++){
    //     printf("5x%d = %d \n", i+1, multi_table[i]);
    // }
    return 0;
}