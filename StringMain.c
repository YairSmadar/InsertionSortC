#include <stdio.h>
#include <stdlib.h>
#include "StringFunc.h"
#define MAX 256
int main()
{
    char a[] = {"aba ba lbait"};
    int x = getline(a);
    printf("%d\n",x);
    return 0;
}
