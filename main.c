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
        if(scanf("%d" , &x) == 1){
            *(arr+i)  = x ;
        } 
        else{
            printf("You put a not good number try again\n");
            i = i -1 ; 
        }
    }
    insertion_sort(arr,size);
    printArr(arr,size);
    
    return 0;
}
