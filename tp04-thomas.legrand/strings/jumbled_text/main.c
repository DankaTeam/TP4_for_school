#include <stdio.h>
#include <stdlib.h>
#include<err.h>
#include "mix.h"

int main(int argc, char *argv[]){
    if (argc < 1||argc >2)
    {
        errx(1,"oui");
    }
    
    printf("%s\n",argv[1]);
    mix(argv[1]);
    printf("%s\n",argv[1]);
}