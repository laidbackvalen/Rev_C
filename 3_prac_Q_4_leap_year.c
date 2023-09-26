#include<stdio.h>

int main(){
    int year;

    printf("Enter The Year You Wanted To Check Wether It's Leap Or Not \n");
    scanf("%d", &year);

    if(year%4==0 && year%100==0 && year%400==0){
       printf("The Year %d Is Leap \n", year); 1
    }
    else{
        printf("The Year %d Is Not Leap \n", year);
    }
2
    return 0;
}