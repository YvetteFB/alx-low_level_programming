#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0
 */
int main(void)
{
int i;
int j;
int k;
 
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
for (k = j + 1; k <= 9; k++)
{
if (j < k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
}
if (!(j == 8 && k == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}