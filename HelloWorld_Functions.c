/*
** HelloWorld_Functions.c
** Raccolta di funzioni di utilità, in linguaggio C
** Author: Sandro Gallo
*/

#include <stdio.h>

void my_PrintHelloWorld(int times) {
    char * msg = "Hello World!";
    for(int i=0; i<times; i++) {
        printf("%d) %s\n", i, msg);
    }
}
