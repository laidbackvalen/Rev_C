#include<stdio.h>

int main(){
    
    int i=1;
    
    int n=5;
    int sum = 0;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("the sum of first naturals numbers is %d \n", sum);

    return 0;
}