/*
Language: 
- C
Run:
- gcc FILE.c
- ./a.out
Install:
- apt install PACKAGE
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char helloWorld[] = "Hello World!";
    int* arr = (int*)malloc(sizeof(int));
    printf("%s\n", helloWorld);
}
