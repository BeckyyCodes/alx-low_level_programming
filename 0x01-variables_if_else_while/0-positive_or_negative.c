<<<<<<< HEAD
#include <Stdlib.h>
#include <time.h>
/**
 * main - prints a random number.
 *
 * Return: Always 0.
*/
=======
#include <stdlib.h>
#include <time.h>
/**
 * main - this code prints a random number and check if
 * 	  it is a postive number or negative number or zero.
 *
 * Return: Always 0;
*/

>>>>>>> b8a4492ee673e10e96cccef9d24726afd0d3077a
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
