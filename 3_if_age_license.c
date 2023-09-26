#include<stdio.h>

int main(){

    int age;

    printf("Enter Your Age \n");
    scanf("%d", &age);

    if(age>=18 && age<=45){
    printf("You Can Apply For License \n");

    }

    else if(age==16 || age==17){
    printf("You Can Apply For Learning license For Scooter \n");
    }
        

    else if(age ==70 || age>70){
    printf("You Dont Have The Authority To Drive \n");

    }

    else{
    printf("You Cannot Apply For license\n");
    }
    
    return 0;
}