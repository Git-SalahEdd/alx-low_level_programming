#include "main.h"

/**
*main - Entry point
**@argc: argc int arg counter
*@argv: argv char arg vector
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
	return (printf("Error\n"), 1);
	}
	if (argc == 2)
	{
	int money[] = {1, 2, 5, 10, 25};
	int n = sizeof(money) / sizeof(money[0]);
	int input_v = atoi(argv[1]);
	int mnc = mincoins(money, n, input_v);

	printf("%d\n", mnc);
	}
	return (0);
}

/**
*mincoins -  function calculat min of coins to make change
*@coins[]: array of given coins
*@n: nbr element on the array of coins
*@input_v: money given to make change
*/

int mincoins(int coins[], int n, int input_v)
{
	if (input_v < 0)
	{
		return (0);
	}
	else
	{
	int dp[1000];
	int i, j;

	dp[0] = 0;
	for (i = 1; i <= input_v; i++)
	{
		dp[i] = input_v + 1;
		for (j = 0; j < n; j++)
		{
			if (coins[j] <= i && dp[i - coins[j]] + 1 < dp[i])
				dp[i] = dp[i - coins[j]] + 1;
		}
	}
	return (dp[input_v]);
	}
	return (0);
}
