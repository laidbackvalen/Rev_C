#include<stdio.h>
int main(){
    
    int runs;

    printf("what is the run score by the player \n");
    scanf("%d", &runs);

    if(runs<50){
        printf("the player is yet to score half century as he is at %d runs \n", runs);

    }
    else if(runs==50){
        printf("the player have scored half century as he is at %d runs\n", runs);

    }
    else if(runs>50 && runs<99){
        printf("the player is playing at %d runs he scored half century and he is yet to score a century \n", runs);

    }
    else if((runs==100 || runs>100) && runs<200){
        printf("the player have scored century, he is at %d runs \n", runs);
    }
    else if(runs==200){
        printf("the player have scored double century, he is at %d runs \n", runs);

    }
    else {
        printf("he is retired hut");
    }
    return 0;
}