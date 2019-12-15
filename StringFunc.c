#include <stdio.h>
#include "StringFunc.h"
#include <string.h>
#define LINE 256

int getline(char s[]){
    size_t w;
    size_t len = strlen(s);
    for (size_t i = 0; i < len.;i++)
    {
       if(s[i] != '\t' || s[i] == ' ') w++;
    }
    return w;
}
