#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StringFunc.h"
#define MAX 256
#define LINES 250
#define a 97
#define b 98
#define space 32

int main()
{
    char buffer[MAX];
    fgets(buffer, MAX, stdin);
    //printf("%s" , buffer);
    char word_to_find[MAX];
    char command;
    size_t buffe_len = strlen(buffer);
    int count = 0;
    while (count++ < buffe_len)
    {
        if ((int)buffer[count] == space)
        {
            for (size_t i = 0; i <= count; i++)
            {
                word_to_find[i] = buffer[i];
            }
            command = buffer[count + 1];
        }
    }
    // printf("%s\n", word_to_find);
    // printf("%c\n", command);
    int flag = 0;
    //size_t word_to_find_length = strlen(word_to_find);
    if (command == a)
    {
        for (size_t k = 1; k < 10; k++)
        {
            fgets(buffer, MAX, stdin);
            //printf("%s\n", buffer);
            buffe_len = strlen(buffer);
            for (size_t i = 0; i < buffe_len ; i++)
            {
                // printf("%s\n", buffer);
                if (buffer[i] == word_to_find[0])
                {
                    flag = checkString((buffer + i), word_to_find);
                    if(flag==1){
                        printf("%s", buffer);
                    } 
                }
            }
            flag = 0;
        }
    }
    // char buf [50] = "the program should print also cats";
    // int temp = 0;
    // char *cat = "cat";
    // for (size_t i = 0; i < 50; i++)
    // {
    //     if(buf[i] == cat[0])
    //     {
    //       temp = checkString((buf+i),cat);
    //     }
    // }
    

    return 0;
}