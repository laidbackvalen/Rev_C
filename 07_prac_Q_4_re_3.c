#include<stdio.h>

int main(){
    int num;
    int multi_table[10];

    printf("which number's multiplication table you want to see \n");
    scanf("%d", &num);
    
    for(int i = 0; i<10; i++){
        
        multi_table[i] = num*(i+1);

        printf("%d x %d = %d \n", num, i+1, multi_table[i]);
    }
    //int *ptr = &multi_table[0];

    printf("the value of 3nd element in array is %d", multi_table[2]);



    return 0;
}