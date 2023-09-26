#include<stdio.h>


int multiplication_table(int *multi_table, int n, int num){

for(int i = 0; i<n; i++){

   multi_table[i] = num*(i+1);

   printf("%d x %d = %d \n", num, i+1, multi_table[i]);

 }

}

int main(){
    
    int mt;
    int mt1;
    int mt2;

    int n;
    

    printf("Enter the table numbers you want to print :");
    scanf("%d", &mt);

    printf("Enter another table numbers you want to print :");
    scanf("%d", &mt1);

    printf("One More table numbers you want to print :");
    scanf("%d", &mt2);
    
    printf("Enter till when you want to see the number multiplies :");
    scanf("%d", &n);



    int muti_pli_array[3][100];  //3 is for 3 tables and 100 is for till 100 the tables can multiplies

    
    printf("\n");

    multiplication_table(muti_pli_array[0], n, mt);
    
    printf("\n");
    
    multiplication_table(muti_pli_array[1], n, mt1);
    
    printf("\n");
    
    multiplication_table(muti_pli_array[2], n, mt2);

    return 0;
}