#include <stdio.h>
#include "InsertionSort.h"
#define size 50

int main()
{
    int x = 0  ;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf(" please enter a new number, you have left %d \n" ,(50-i));
        scanf("%d" , &x) ;
        *(arr+i)  = x ;
    }
    insertion_sort(arr,size);
    printArr(arr,size);
    
    return 0;
}
