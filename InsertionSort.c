#include <stdio.h>
#include "InsertionSort.h"


void shift_element(int* arr, int i){
        int index = i;
        while(index > 0){
            *(arr+index-1) = *(arr+index);
            index--;
        }
        

void printArr(int arr[], int x){
    for (size_t i = 0; i < x; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
}
