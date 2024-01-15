#include <stdio.h>

int main() {
    char currentLetter = 'a';

    while (currentLetter <= 'z')
    {
        putchar(currentLetter);
        currentLetter++;
    }

    putchar('\n');  // Print a newline character after the alphabet

    return 0;
}
