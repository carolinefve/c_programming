// Written by Caroline at 04/11/25
// This program displays my name

#include <stdio.h>
#include <string.h>

int main(void)
{
    char myName[] = "Caroline";
    printf("Hello, my name is %s\n", myName);
    int index = strlen(myName) - 1; // strlen() return the number of characters 
    while (index > -1)
    {
        printf("%c", myName[index]);
        index = index - 1;
    }
    printf("\n");
    return 0;
}