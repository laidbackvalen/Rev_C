#include <stdio.h>

int main(){

    int rating;

    printf("ENTER YOUR RATING \n");
    scanf("%d", &rating);

    switch(rating){

        case 1:
        printf("Your Rating Is 1 \n");
        break;
        case 2:
        printf("Your Rating Is 2 \n");
        break;
        case 3:
        printf("Your Rating Is 3 \n");
        break;
        case 4:
        printf("Your Rating Is 4 \n");
        break;
        case 5:
        printf("Your Rating Is 5 \n");
        break;
        default:
        printf("Your Rating Is Invalid \n");
        break;
    }
    return 0;
}