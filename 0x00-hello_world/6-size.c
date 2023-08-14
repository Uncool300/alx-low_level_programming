#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Correct)
 */
int main(void)
{
char 1;
int 2;
long int 3;
long long int 4;
float 5;
printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(1));
printf("Size of a int: %d byte(s)\n", (unsigned long)sizeof(2));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(3));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(4));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(5));
return (0);
}
