#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int myint;
	char mychar;
	long int mylint;
	long long int myllint;
	float myfloat;

        printf("Size of a char: %ld byte(s)\n",(unsigned long)sizeof(mychar));
        printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(myint));
        printf("Size of a long int: %ld byte(s)\n",(unsigned long)sizeof(mylint));
        printf("Size of a long long int: %ld byte(s)\n",(unsigned long)sizeof(myllint));
        printf("Size of a float: %ld byte(s)\n",(unsigned long)sizeof(myfloat));
        return (0);
}
