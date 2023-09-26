#include<stdio.h>

float fahrenheit(float celsius);

int main(){

    float celsius;

    printf("Enter The Tempertaure Celcius \n");
    scanf("%f", &celsius);

    printf("The Temperature In Fahrenheit is %f ", fahrenheit(celsius));

    return 0;
}

float fahrenheit(float celsius){
    int result;
    result = celsius * 9/5 + 32;
    return result;
}