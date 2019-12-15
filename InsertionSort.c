#include <stdio.h>
#include "InsertionSort.h"

void shift_element(int *arr, int i)
{

    while (i > 0)
    {
        *(arr + i) = *(arr + i - 1);
        i--;
        if (i == 0)
        {
            *(arr + i) = 999;
        }
    }
}
void insertion_sort(int *arr, int len)
{
    int flag = 0 ; 
    int key = 0;
    int counter = 0;

    for (size_t i = 0; i < len-1; i++)
    {
        counter = 0;
        key = *(arr + i + 1);
        int *index = (arr + i);
        while (key < *(index))
        {
            if(index == arr)
            {
                counter++;
                flag = 1;
                break;
            }
            index = (index - 1);
            counter++;
            flag = 1;
        }
        if(flag) 
        {
            if(index == arr )
            {
                if(*arr>=key){
                shift_element(index, counter);
                *(index) = key;
                }
                else{
                    shift_element(index+1, counter);
                *(index+1) = key;
                }
            }
            else
            {
                shift_element(index+1, counter);
                *(index+1) = key;
            }
        }
        flag = 0 ;
       
    }
}
void printArr(int arr[], int x)
{
    for (size_t i = 0; i < x; i++)
    {
       if(i == x-1)
       {
            printf("%d", arr[i]);
            
       }
        else printf("%d,", arr[i]);
        
    }
    printf("\n");
}
