#include <stdio.h>
#include "StringFunc.h"
#include <string.h>
#define LINE 256

int checkString(char str[] , char arr[]){
    int len = strlen(arr);
    
    for (size_t i = 0; i < len; i++)
    {
        if(*(str+i) != *(arr+i)) return 0 ;
    }
    return 1;   
}




void printTheWord(char str[]){
    int benNotNormal = strlen(str) ;
    char *c = " ";
    char *r = "\n";
    for (size_t i = 0; i < benNotNormal; i++)
    {
        if( (*(str+i) == c[0]) || (*(str+i) == r[0])) break;
     printf("%c" , *(str+i));
    }
    printf("\n");
}


int checkStringWord(char str[] ,  char arr[]) {
    int counter = 0 ; 
    int flag = 0 ;
    int counter2 = 0  ;
    int howMushChars = 0 ; 
    char *s = " "; 
    char *r = "\n";
    int  lenNormal = strlen(arr) ; 

    for (size_t i = 0; i < LINE; i++)
    {
        if((*(str+i) == *s) || (*(str+i) == r[0]))
        {
            break;
        }
        howMushChars++;
    }
    int check = howMushChars-lenNormal ; 
    if(check > 1){return 0;}
    if(check < 0){return 0 ;}
    else if(check == 1){
    for (size_t i = 0; i < howMushChars; i++) // this is lcat
    {
      counter2 = 0 ;   
      counter=0 ;
      for (size_t k = 0; k < lenNormal; k++) // this is cat
      { 
          if(counter2 == i)flag = 1;
          if(flag == 1 && (*(str+k+1) == *(arr+k))) counter++;
          if((*(str+k) == *(arr+k)) && flag == 0) counter++;
          counter2++;
      } 
      flag = 0 ;
      if(counter == lenNormal){return 1;}
      
      
      }
    }
    
    else if(check == 0)
    {
        int flag1 = checkString(str , arr);
        return flag1;
    }
    
    return 0 ;
}

