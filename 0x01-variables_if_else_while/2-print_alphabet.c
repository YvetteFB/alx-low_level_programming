#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 1
*/
int main(void)
{
char currentLetter = 'a';
while (currentLetter <= 'z')
{
putchar(currentLetter);
currentLetter++;
}
putchar('\n');
return (0);
}
