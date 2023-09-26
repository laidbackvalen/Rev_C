#include<stdio.h>
#include<string.h>

int main(){

    char st1[45] = "Hexlo";
    char st2[] = "Hewlo";
    
    int val = strcmp(st1, st2);
    
    printf("Now the val is %d", val);
    
    return 0;
}