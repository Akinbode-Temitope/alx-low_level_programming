#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Positive numbers*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() % RAND_Max;
	if (n > o)
	{	
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}  
	return (0);
}

