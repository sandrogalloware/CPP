/*
** HelloWorld.cpp
** Esempio di programma C++ che chiama anche delle funzioni esterne in C
** Author: Sandro Gallo
*/

#include <iostream>
#include "HelloWorld_Functions.c"
using namespace std;

int main()
{
    cout << "Hello C++ World!" << endl;
    my_PrintHelloWorld(2);
    cout << endl;
    my_PrintHelloWorld(3);
    return 0;
}
