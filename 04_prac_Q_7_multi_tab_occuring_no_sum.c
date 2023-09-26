#include<stdio.h>

int main(){
    
    int i =1;
    int mt;
    int sum = 0;

    printf("Enter the table number \n");
    scanf("%d", &mt);
    printf("\n");

    for(int i = 1; i<=10; i++){
        
        printf("%d x %d = %d \n", mt , i, mt * i);

        sum+=mt*i;

    
    }
    printf("Sum of the Products of this multiplication table is %d \n", sum);

    return 0;
}