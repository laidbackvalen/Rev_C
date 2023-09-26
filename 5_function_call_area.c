#include<stdio.h>

int area(int side);

int main(){
    
    int side;  //variable declaration
    int a;

    printf("Enter Side \n");
    scanf("%d", &side);
    
    
    area(side);
    printf("the area of a square is %d \n ", area(side));

    return 0;
}

int area(int side){
    int area;
    area = side*side;
    return area;
}