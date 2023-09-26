#include<stdio.h>

int main(){
    float principle = 12, rate = 4, year= 10;
    float simpleinterest = (principle * rate * year)/100;
    printf("Your Simple Interest Is %f", simpleinterest);
    return 0;
}