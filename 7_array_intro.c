 #include<stdio.h>
 
//ARRAY IS A COLLECTION OF SIMILAR ELEMENTS
//ONE VARIABLE IS CAPABLE OF STORING MULTIPLE VALUES

 int main(){
    
    int marks[4]; //array //allocate space for 4 integer
    
    //like we dont have to intisialise int mark1, mark2, mark3;        
    
    //int mark1;
    //int mark2;   
    //int mark3;
    //int mark4

    printf("Enter The Value Of 1: ");
    scanf("%d", &marks[0]);            //the initial will start from 0
                                       //like marks[0], not mark[1]; everywhere does the same
    printf("Enter The Value Of 2: ");
    scanf("%d", &marks[1]);
    printf("Enter The Value Of 3: ");
    scanf("%d", &marks[2]);
    printf("Enter The Value Of 4: ");
    scanf("%d", &marks[3]);

    printf("the marks obtained is %d %d %d and %d",
     marks[0], marks[1], marks[2], marks[3]);

     return 0;
 }