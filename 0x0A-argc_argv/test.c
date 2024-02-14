#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry poin
 *@argc: 'the program's description'
 *@argv: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
int j;
int i = 0;

if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
j = atoi(argv[1]);
while (j > 0)
{
if (j >= 25)
j = j - 25;
else if (j >= 10)
j = j - 10;
else if (j >= 5)
j = j - 5;
else if (j >= 2)
j = j - 2;
else if (j >= 1)
j = j - 1;
++i;
}
printf("%d\n", i);
return (0);
}
