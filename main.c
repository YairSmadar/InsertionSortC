#include <stdio.h>
#include "InsertionSort.h"


int main()
{
    int arr[] = {9,45,-11,23,66,87,0,12,54,-100};
    printArr(arr,10);
    insertion_sort(arr , 10);
    printf("\n");
    printArr(arr ,10);
    return 0;
}
