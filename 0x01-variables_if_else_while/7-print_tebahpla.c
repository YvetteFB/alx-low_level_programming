#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 1
*/
int main(void)
{
char currentLetter = 'z';
while (currentLetter >= 'a')
{
putchar(currentLetter);
currentLetter--;
}
putchar('\n');
return (0);
}
