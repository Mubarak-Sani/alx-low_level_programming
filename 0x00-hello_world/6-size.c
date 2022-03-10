#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char:%lu\n ", sizeof(char), "byte(s)");
	printf("Size of an int:%lu\n ", sizeof(int), "byte(s)");
	printf("Size of a long int:%lu\n ", sizeof(long), "byte(s)");
	printf("Size of a long long int:%lu\n ", sizeof(long long), "byte(s)");
	printf("Size of a float:%lu ", sizeof(float), "byte(s)");
}
