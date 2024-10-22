/* 0. Positive anything is better than negative nothing
 */

#include <stdlib.h>
#include <time.h>

/** main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 0, equal 0, or less than 0.
 *
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d and is 0\n", n);
}
else
{
	printf("%d and is negative\n", n);
}

return (0);
}
