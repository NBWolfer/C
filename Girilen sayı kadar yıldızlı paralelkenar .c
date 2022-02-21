#include <stdio.h>

int main()
{										
	int a;
	printf("Lutfen bir sayi girin:");
	scanf_s("%d", &a);
	for (int c = 1; c <= a; c++)
	{
		for (int x = 1; x <= a; x++)
		{
			printf("*");
		}
		printf("\n");
		for (int b = 1; b <= c; b++)
		{
			printf("  ");
		}

	}
	return 0;
}