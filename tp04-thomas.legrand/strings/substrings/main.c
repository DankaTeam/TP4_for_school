#include <stdio.h>
#include <stdlib.h>
#include <err.h>

int length(char array[]);

int main(int argc,char *argv[])
{
    if (argc != 3)
    {
        errx(1,"Usage: str1 str2");
    }
    int len_main_arr = length(argv[1]);
    int buff = 0;
    int pos = -1;
    int i = 0;
    int is_done = 0;
    while (i < len_main_arr && is_done == 0 )
    {    
        if (argv[1][i] == argv[2][buff])
        {
            buff +=1;
            pos = i;
        }
        else{
            buff = 0;
            pos = -1;
        }
        if (buff == length(argv[2]) -1)
        {
            is_done = 1;
        }
        
        i++; 
    }
    if (pos == -1)
    {
        printf("Not found!\n");
    }
    else{
        printf("%s \n",argv[1]);
        pos = pos - length(argv[2]);
        for (int i = 0; i <= pos +1; i++)
        {
            printf(" ");
        }
        
        printf("^ \n");
    }
    return 0;
}

int length(char array[]){
    int buff = 0;
    while (array[buff] != '\0')
    {
        buff +=1;
    }
    return buff;
}