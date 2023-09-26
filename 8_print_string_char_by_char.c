#include<stdio.h>

int main(){

//////////////////////////////////////////////////////////////////////////////////////////////////////////////    


char *ptr = "Mr/Ms";
    // puts(str);


//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//here the values are already given
//with the use of for loop we will print the character array values in a line

    char char_by_char[20] = {'V','a','l','e','n','\0'};

    for(int i = 0; i<5; i++){
        printf("%c", char_by_char[i]);
    }



//////////////////////////////////////////////////////////////////////////////////////////////////////////////


    printf("\n");



/////////////////////////////////////////////////////////////////////////////////////////////////////////////

   //when you have to take input from user character by character this is used

    char char_by_char2[20];  //a character array with index values upto 20

    char c;                      //initialising char c
    int i = 0;                   //initialising char i;

    while(c!='\n'){              //we cannot use arrays or pointers to compare in a condition //so we have initialise char c
                                 //and we will be providing the value of c to array "char_by_char2[i]"
        
        fflush(stdin);           //fflush standard input //this function is used to flush the scanf function input everytime the loops runs
    
        scanf("%c", &c);         //this will take the input from the user 
        char_by_char2[i] = c;    //here array will get the value from the user from index 0 to so on
                                 //when you put the 1st character "k" it will be stored in index 0
        i++;                     //incremente
    }
      char_by_char2[i-1] = '\0'; //when the while loop exits //the char string array will be terminated here with '\0'   
                                 //[i-1] is the final index - 1 //which will eliminate the space where \n applies in while condition
    
    printf("the value of string is %s \n", char_by_char2); //   



/////////////////////////////////////////////////////////////////////////////////////////////////////////////



    char string[20]= "Rajubhai";
        printf("%s", string);



////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        
        
        printf("\n");



 ///////////////////////////////////////////////////////////////////////////////////////////////////////////   
    
    
    
    char string2[20];

    printf("enter the value of string \n");
    scanf("%s", string2);
    //gets(string1);

    printf("the value of string is %s \n", string2);
    // puts(string);



//////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

 printf("\n \n \n \n \n \n \n \n \n "); 

 
    printf("%s %s %s %s %s \n", ptr, char_by_char, char_by_char2, string, string2);

 printf("\n \n"); 
    
    return 0;
}