#include<stdio.h>

int main(){

    int lowest_natural_number;
    int natural_no;

    printf("Enter The Number Of First Natural Number You Want To know\n");
    scanf("%d", &natural_no);

    printf("\n");
    
    printf("Your Natural Numbers Are \n");

    for(int lowest_natural_number = 1 ; lowest_natural_number <= natural_no ; lowest_natural_number++){
        
        printf("%d \n", lowest_natural_number);
    }
    return 0;
}