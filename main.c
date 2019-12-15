#include <stdio.h>
#include "InsertionSort.h"


int main()
{
    int arr[] = {4,5,8,3,9,7,1};
    printArr(arr,6);
    shift_element(arr , 3);
    printArr(arr ,6);
    return 0;
}
