/*write a program to change the value of a variable 
to ten times of its current value
write a function and pass the value by reference
*/

#include<stdio.h>
void change(int *ptr);

int main()
{
    int a;
    printf("Enter the value of a :\n");
    scanf("%d",&a);
    
    // int *ptr=&a;
   
    printf("the current value of a is =%d\n",a);
    
    change(&a);
    printf("now,the value of a is =%d", a);
    return 0;
}

void change(int *ptr)
{
(*ptr)*=10;
}

