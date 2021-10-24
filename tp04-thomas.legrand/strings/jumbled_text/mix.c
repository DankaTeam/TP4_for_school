#include <stdio.h>
#include "mix.h"

void doubleswap(char s[], int i, int j);
int is_inside(char s);
void mixWord(char s[], size_t start, size_t end);

void mix(char s[]){
    size_t i =0;
    size_t start = 0;
    size_t end = 0;
    while (s[i] != '\0')
    {
        if (is_inside(s[i])==1)
        {
            end = i;
            mixWord(s,start,end);
            start = end +1;
        }
        i++;
        
    }
    mixWord(s,start,i);
}

void mixWord(char s[], size_t start, size_t end){
    if (end - start > 3)
    {
        for (size_t i = start + 1; i < end -2; i+=2)
        {
            doubleswap(s,i,i+1);
        }
        
    }
    
}

void doubleswap(char s[], int i, int j){
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

int is_inside(char s){
    size_t i = 0;
    char separator[] = " ,;:!?./%*$=+)@_-('&1234567890\"\r\n";
    while(separator[i] != '\0')
    {
        if (s == separator[i])
        {
            return 1;
        }
        i++;
        
    }
    return 0;
}