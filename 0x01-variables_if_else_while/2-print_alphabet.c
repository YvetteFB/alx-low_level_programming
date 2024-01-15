#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 1
*/
int main() {
    char currentLetter = 'a';

    while (currentLetter <= 'z')
    {
        putchar(currentLetter);
        currentLetter++;
    }

    return 0;
}
