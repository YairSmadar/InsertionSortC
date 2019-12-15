#include <stdio.h>
#include "InsertionSort.h"


int main()
{
    int arr[] = {9,45,-11,23,66,87,0,12,54,-100,10000,34,66,-3,-1000};
    printArr(arr,15);
    insertion_sort(arr , 15);
    printf("\n");
    printArr(arr ,15);
    return 0;
}
