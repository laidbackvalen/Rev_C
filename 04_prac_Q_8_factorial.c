#include <stdio.h>

int main(){

    int i=1;
    int n;
    int fac = 1;
    printf("Enter The Number Whose Factorial You Want To Check \n");
    scanf("%d", &n);

    for(int i =1; i<=n; i++ ){
      printf("%d  ", fac*=i); // fac = fac * i;  //printf is used here to see what fac*=i is doing;
    }

    printf("%d ", fac);
    return 0;
}