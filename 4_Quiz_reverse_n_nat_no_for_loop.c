#include<stdio.h>

int main(){

    int n;
    int nat;

    printf("How Many Natural Numbers You Want To Check Below Yours \n");
    scanf("%d", &nat);

    printf("\n");

    for(int n = 1; n<=nat; nat--){      //int n = nat ; n ; n--  //another way
    
    printf("%d \n", nat);               // n
    }

    return 0;
}