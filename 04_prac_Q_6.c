#include<stdio.h>

int main(){
    int n =1;
    int nat;
    int sum =0;


    printf("Enter Your Number \n");
    scanf("%d", &nat);



    // FOR LOOP

    // for(int n = 1; n<=nat ; n++){
    //     sum+=n;
    //     }
    //     printf("the sum of first %d natural number is %d", nat, sum);   




    // DO WHILE LOOP

    // do{
    //     sum+=n;
    //     n++;
    // }while(n<=nat);

    // printf("the sum of first %d natural number is %d", nat, sum);  

    


    //WHILE LOOP

    while(n<=nat){
        sum+=n;
        n++;
    }
    printf("the sum of first %d natural number is %d", nat, sum);  
    

    return 0;
}