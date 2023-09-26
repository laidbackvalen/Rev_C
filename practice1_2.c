//------------------------------------------------------------------------------------------------------------

//THIS IS THE PROGRAM FOR AREA OF A CIRCLE

// #include<stdio.h>

// int r = 32;
// float pie = 3.14159;

// int main(){
//     printf("Area Of A Circle = %f", pie*r*r); // the result will be decimal so we have float format specifier
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------

//THIS IS THE PROGRAM FOR VOLUME OF A CYLINDER

// #include<stdio.h>
    
//     int radius = 32;
//     float pie = 3.14159;
//     int height = 13;

// int main(){
//     printf("The Volume Of A Cylinder = %f", pie*radius*radius*height);
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------


//VOLUME OF A CIRCLE USING USER INPUT


#include<stdio.h>



int main(){

    int radius;
    float pie = 3.14159;
    int height;

    printf("Enter The Value Of Radius \n");
    scanf("%d",&radius);
    printf("Enter The Value Of Height \n");
    scanf("%d",&height);
    printf("The Volume Of A Cylinder = %f", pie*radius*radius*height);
    return 0;
}