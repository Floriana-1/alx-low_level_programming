#include <stdio.h>
/**
* main - entry point
*
* Return: always return 0
*/
int main(void)
{
char a;
for (a = 'b'; a <= 'z'; a++)
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
return (0);
}
