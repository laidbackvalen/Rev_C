// C program to find the count of positive
// and negative integers in an array
  
#include <stdio.h>
  
// Function to find the count of
// positive integers in an array
int countPositiveNumbers(int* arr, int n)
{
    int pos_count = 0;
    int i;
    for (i = 0; i < n; i++) {  //n is the number of elements
        if (arr[i] > 0)
            pos_count++;  //means if the condition mets than do pos_count + 1
    }
    return pos_count;
}
  
// Function to find the count of
// negative integers in an array
int countNegativeNumbers(int* arr, int n)
{
    int neg_count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0)
            neg_count++;
    }
    return neg_count;
}
  
// Function to print the array
void printArray(int* arr, int n)
{
    int i;
  
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
  
// Driver program
int main()
{
    int arr[] = { 2, -1, 5, 6, 0, -3, 5, -9, 11, 30, -5 };
    
    int n;                 //n is the number of elements

    // If you have an array then sizeof(array) returns the number of bytes
    // the array occupies. Since each element can take more than 1 byte of space,
    // you have to divide the result with the size of one element (sizeof(array[0])).
    // This gives you number of elements in the array.

    n = sizeof(arr) / sizeof(arr[0]);  
                                      //sizeof(arr) i.e, size of int which is 4 each * total elements which is 11
                                      //sizeof(arr) = 44
                                      //sizeof(arr[0]) = 4, because we are taking single element feom the array
                                      //sizeof(arr) / sizeof(arr[0]) = 44 / 4 = 11
                                      //11 will be the total element present in arr[];

    printArray(arr, n);
  
    printf("Count of Positive elements = %d\n",
           countPositiveNumbers(arr, n));
           
    printf("Count of Negative elements = %d\n",
           countNegativeNumbers(arr, n));
  
    return 0;
}