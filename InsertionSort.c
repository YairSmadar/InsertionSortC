#include <stdio.h>
#include "InsertionSort.h"


void shift_element(int* arr, int i){
    
        while(i > 0){
            *(arr+i) = *(arr+i-1);
            i--;
            if(i == 0){*(arr+i) = 999 ;}
        }

}    

void printArr(int arr[], int x){
    for (size_t i = 0; i < x; i++)
    {
        if(i == 0) {printf("[");}
        printf("%d , ",arr[i]);
        if(i == x-1) {printf("]");}
    }
    
}

