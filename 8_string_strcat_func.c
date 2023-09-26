#include<stdio.h>
#include<string.h>

//concatenate means = link (things) together in a chain or series.

int main(){
    
    char str1[] = "Valen"; 
    char str2[] = "Patel";

    strcat(str1, str2);  //string concatenate
                         //strcat will link str1 with str2
                         
    printf("The Concatenate Value Of String Is %s", str1); //when you print "str1" value it will return link value which is "ValenPatel"
                                                           //"str2" will only print "patel" here
                                                           //if you want add space between "str1" and "str2",
                                                           //you have to add it in the initialisation
    return 0;
}

