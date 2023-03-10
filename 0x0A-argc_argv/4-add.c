#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
	/**
	 * check_num - check - string there are digit
	 * @str: array str
	 *
	 * Return: Always 0 (Success)
	 */
	int check_num(char *str)
	{
		/*Declaring variables*/
		unsigned int count;


		count = 0;
		while (count < strlen(str)) /*count string*/


		{
			if (!isdigit(str[count])) /*check if str there are digit*/
			{
				return (0);
			}


			count++;
		}
		return (1);
	}


	/**
	 * main - Print the name of the program
	 * @argc: Count arguments
	 * @argv: Arguments
	 *
	 * Return: Always 0 (Success)
	 */


	int main(int argc, char *argv[])


	{


		/*Declaring variables*/
		int count;
		int str_to_int;
		int sum = 0;


		count = 1;
		while (count < argc) /*Goes through the whole array*/
		{
			if (check_num(argv[count]))


			{
				str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
				sum += str_to_int;
			}


			/*Condition if one of the number contains symbols that are not digits*/
			else
			{
				printf("Error\n");
				return (1);
			}


			count++;
		}


		printf("%d\n", sum); /*print sum*/


		return (0);
	}



=============================



100-change.c code


#include <stdio.h>
		
#include <stdlib.h>
		
#include "main.h"
		

		
/**
		
 * main - prints the minimum number of coins to
		
 * make change for an amount of money
		
 * @argc: number of arguments
		
 * @argv: array of arguments
		
 *
		
 * Return: 0 (Success), 1 (Error)
		
 */
		
int main(int argc, char *argv[])
		
{
		
	int num, j, result;
		
	int coins[] = {25, 10, 5, 2, 1};
		

		
	if (argc != 2)
		
	{
		
		printf("Error\n");
		
		return (1);
		
	}
		

		
	num = atoi(argv[1]);
		
	result = 0;
		

		
	if (num < 0)
		
	{
		
		printf("0\n");
		
		return (0);
		
	}
		

		
	for (j = 0; j < 5 && num >= 0; j++)
		
	{
		
		while (num >= coins[j])
		
		{
		
			result++;
		
			num -= coins[j];
		
		}
		
	}
		

		
	printf("%d\n", result);
		
	return (0);
		
}

