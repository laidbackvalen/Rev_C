#include<stdio.h>

void good_morning();
void good_afternoon();
void good_night();

int main(){

    int a;

    good_morning();
    
    return 0;
}

void good_morning(){
    printf("Good Morning \n");
    good_afternoon();
}

void good_afternoon(){
    printf("Good Afternoon \n");
    good_night();
}

void good_night(){
    printf("Good Night \n");
}