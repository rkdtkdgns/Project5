#include <stdio.h>

int main()
{
	int i, j, t;
printf("มูภิทย:");
scanf("%d", &t);

	for (i = 1; i <= t; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}