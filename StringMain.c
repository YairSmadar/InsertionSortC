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
    printf("%s\n", word_to_find);
    printf("%c\n", command);
    int flag = 0;
    //size_t word_to_find_length = strlen(word_to_find);
    if (command == a)
    {
        for (size_t k = 1; k < LINES; k++)
        {
            fgets(buffer, MAX, stdin);
            buffe_len = strlen(buffer);
            for (size_t i = 0; i < buffe_len; i++)
            {
                if(buffer[i] == word_to_find[0])
                {
                    flag = checkString((buffer+i),word_to_find);
                    if(flag) break;
                }
            }
            if(flag) printf("%s\n" , buffer);
            
            flag=0;
        }
    }
    // char buf [50] = "and crat and lcat but it shouldn`t";
    // int temp = 0;
    // char *cat = "cat";
    // int len = strlen(cat);
    // if(buf[14] == cat[0])
    //     {
    //          temp = checkString((buf+14),cat);
    //     }

    return 0;
}