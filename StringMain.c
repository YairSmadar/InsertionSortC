#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StringFunc.h"
#define MAX 256
#define LINES 250

int main()
{
    char buffer[MAX];
    fgets(buffer, MAX, stdin);
    char word_t_find[MAX];
    char space = 32;
    char command;
    size_t buffe_len = strlen(buffer);
    int count = 0;
    while (count++<buffe_len)
    {
        if ((int)buffer[count] == space)
        {
            for (size_t i = 0; i <= count; i++)
            {
                word_t_find[i] = buffer[i];
            }
            command = buffer[count + 1];
        }
    }
    printf("%s\n", word_t_find);
    printf("%c\n", command);
    if(command == 'a'){
        for (size_t i = 1; i < LINES; i++)
        {
            fgets(buffer, MAX, stdin);
            
        }
        
    }
    return 0;
}