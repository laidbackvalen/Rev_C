#include<stdio.h>

void Sum_Avg(int a, int b, int *sum, float *average);

int main(){
    int c = 4;
    int d = 5;
    int add;
    float avg;
    
    Sum_Avg(c, d, &add, &avg);
    printf("the sum is %d \n", add);
    printf("the avg is %f \n", avg);

    return 0;
}
void Sum_Avg(int a, int b, int *sum, float *average){
     *sum = a+b;
    *average = (float)*sum/2;
}