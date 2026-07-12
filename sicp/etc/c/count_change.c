#include <stdio.h>

#define FIRST_DENOMINATION(kinds) (coin_values[(kinds) - 1])

int coin_values[] = {1, 5, 10, 25, 50};

int recursion(int amount, int kinds)
{
	if (amount == 0)
		return 1;
	if (amount < 0 || kinds == 0)
		return 0;
	return recursion(amount, kinds - 1) +
		recursion(amount - FIRST_DENOMINATION(kinds), kinds);
}

int count_change(int amount)
{
	return recursion(amount, 5);
}

int main(void)
{
	int amount = 100;
	printf("%d\n", count_change(100));
	return 0;
}
