#include<stdio.h>

int main(){

    char string[] = "valen";
    char *ptr;
    ptr = &string[2];

    
    for(int i = 0; i <5; i++){   //For Loop For Printing Whats Inside The Printf function
    printf("The Character '%c' Is stored in Memory Location: %u \n", string[i], &string[i]); //string[i] prints the index value
                                                                                             //which starts from 0,1,2...
                                                                                             //&string[i] will print the value of
                                                                                             //string[i]                                                                                           
    
    }

    printf("VERIFING.... \n");

    printf("The Memory Location Where Character 'l' is stored : %u \n", ptr); //pointer points at index string[2]

    ptr++;  //incrementing pointer so it can return the value of character in the next index
    printf("The Memory Location Where Character '%c' is stored : %u \n", string[3], ptr);

    ptr++;
    printf("The Value At String[4] is: %c \n", *ptr);

    

    return 0;
}