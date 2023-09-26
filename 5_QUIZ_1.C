#include<stdio.h>

void good_morning();
void good_afternoon();
void good_night();

int main(){

    int a;

    good_morning();
    good_afternoon();
    good_night();
    
    return 0;
}

void good_morning(){
    printf("Good Morning \n");
}

void good_afternoon(){
    printf("Good Afternoon \n");
}

void good_night(){
    printf("Good Night \n");
}