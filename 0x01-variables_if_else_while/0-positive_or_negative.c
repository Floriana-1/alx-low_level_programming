#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(4));
	n = rand(24) - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
