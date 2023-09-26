#include<stdio.h>
 
//for better explanation go through this link  https://www.youtube.com/watch?v=1uRi9bYVIxs
// Comment out the link first

int main(){
   
    for(int i=1; i<=5; i++ ) 
    {
        for(int j=1; j<=i; j++ ){

        printf("*");

       }  
         
       printf("\n");
    }
 
    return 0;
}

//for reverse order

// int main(){
   
    // for(int i=1; i<=5; i++ ){

    //     for(int j=5; j>=i; j-- ){  

    //     printf("*");

    //    }    
    //    printf("\n");
    // }
//     return 0;
// }