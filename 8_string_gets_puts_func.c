#include<stdio.h>

//gets() function, we read as "get s" , "getstring"
//gets() is use to take input from the user when you want to print string
//puts() funtion is used to print for gets() function, 

int main(){
    
    char string[20];

    printf("Enter Your Name: ");

    // scanf("%s", &string); //if you enter your name as "valen rajubhai patel" scanf() will take "valen" only
                            //scanf() function automatically terminate after a space

    gets(string);  //gets() function will work as scanf() function //it will take input from user
                   //if you want to use string with space //you have to use gets() function
                   //scanf() will not take space between characters
                   
    puts(string); //puts() is to print the string
                  //it places the cursor on the next line

    printf("Your Name: %s ", string);
    

    return 0;
}