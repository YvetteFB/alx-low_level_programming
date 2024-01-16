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
for (k = j; k <= 9; k++)
{
for (n = (k == i) ? j + 1 : 0; n <= 9; n++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(n + '0');

if (!(i == 9 && j == 9 && k == 9 && n == 9))
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
