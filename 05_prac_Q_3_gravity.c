#include<stdio.h>

float force(float mass);

int main(){
    float m;
    
    printf("\n");
    printf("Enter The Value Of Mass \n");
    scanf("%f", &m);
    
    printf("The value Of Force In Newton = %.2f \n", force(m)); //.2 will return 2 digit after decimal
    printf("\n");                                              //.0 will return no decimal value
                                                              //.1 will return 1 digit after decimal   

    return 0;
}

float force(float mass){
    float result;
    result = mass * 9.8;
    return result;
}