#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 1
*/
int main(void)
{
for (currentLetter = 'a'; currentLetter <= 'z'; currentLetter++)
{
if (currentLetter == 'q' || currentLetter == 'e')
			continue;
putchar(currentLetter);
}
putchar('\n');
return (0);
}
