#include <stdio.h>
#include "StringFunc.h"
#include <string.h>
#define LINE 256

int checkString(char *str , char arr[]){
    int flag = 1 ; 
    int len = strlen(arr);
    for (size_t i = 0; i < len; i++)
    {
        if(*(str+i) != arr[i]) flag  = 0 ;
    }
    return flag;
    
}

