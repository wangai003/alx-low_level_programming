#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 * return: 0 (success)
 */
int main(void)
{
char a;
long int b; 
long long int c; 
char d; 
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
