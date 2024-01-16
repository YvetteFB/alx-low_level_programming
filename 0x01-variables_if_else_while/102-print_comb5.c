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
int n;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
for (n = k + 1; n <= 9; n++)
{
if (i < j)
{
putchar(i + '0');
putchar(j + '0');
}

if (k < n)
{
putchar(i + '0');
putchar(j + '0');
}

if (!(i == 8 && j == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');

return (0);
}
