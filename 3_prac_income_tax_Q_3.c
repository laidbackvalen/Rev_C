#include<stdio.h>

int main(){
    
    float income;
    float incometax;
    

    printf("What Is Your Salary \n");
    scanf("%f", &income);

    if(income>=250000 && income<=500000){
    printf("You Have To Pay 5 Percentage As A Tax On Income Above 2,50,000 \n");
    printf("Which Is %f On Income %f \n", incometax = (income-250000)*0.05, income); 
    }

    else if(income>500000  && income<=1000000){
    printf("You Have To Pay 20 Percentage As A Tax On Income Above 5,00,000 \n");
    printf("Which Is %f On Income %f \n", incometax = (income-500000)*0.20, income);  
    }

    else if(income>1000000){
    printf("You Have To Pay 30 Percentage As A Tax On Income Above 10,00,000 \n");
    printf("Which Is %f On Income %f \n", incometax = (income-1000000)*0.30, income);
    }
    
    else{
        printf("You Do Not Have To Pay Income Tax");
    }
    return 0;
}