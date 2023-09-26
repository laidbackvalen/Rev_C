#include<stdio.h>

int main(){

    int physics;
    int chemistry;
    int maths;
    float average; 

    printf("Enter Yours Marks In Physics \n");
    scanf("%d", &physics);
    printf("Enter Yours Marks In Chemistry \n");
    scanf("%d", &chemistry);
    printf("Enter Yours Marks In Maths \n");
    scanf("%d", &maths);
    
    average = (physics+chemistry+maths)/3;
 
    if( (average>=40 )  &&   physics>=33 && chemistry>=33 && maths>=33   ) 
    {
    printf("The Required Percentile Is 40");
    printf("You have Passed The Exam Your Percentile is %f \n", average );
    }
    else
    {
    printf("You have Failed The Exam Percentile Is %f \n", average);
    
    }

    return 0;
}