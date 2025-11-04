// Written by Caroline at 04/11/25
// This program displays y the address of the Computer Science Department

#include <stdio.h>
#include <string.h>

// Tp avoid repeating an action create a function

void reverseString(char str[]) 
{
    int index = strlen(str) - 1; 
    while (index > -1)
    {
        printf("%c", str[index]);
        index = index - 1;
    }
    printf("\n");

    // C functions can only return one thing at a time, you can't "return" an entire array.
}


int main(void)
{
    char department[] = "Dept. of Computer Science";
    char address[] = "66-72 Gower St";
    char postcode[] = "WC1E 6EA";
    char city[] = "London";
    char country[] = "United Kingdom";

    printf("The %s is at %s, %s, %s, %s \n", department, address, city, postcode, country);
    reverseString(department);
    reverseString(address);
    reverseString(city);
    reverseString(postcode);
    reverseString(country);

    return 0;
}