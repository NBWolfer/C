#include <stdio.h>

int main()
{
	int num,a = 2;
	char e;
	
	while(1)
	{
		printf("please enter a value that you want check that prime num or not:");
		scanf_s("%d", &num);
		if (num != 2 && num > 0 && num!=1)
		{
			for (a; a < num; a++)
			{
				if (num % a == 0)
				{
					printf("\n not prime\n");
					break;
				}
				else
				{
					printf("\n prime\n");
					break;
				}
			}
		}
		else if (num == 2)
		{
			printf("\n prime\n");
		}
		else if (num == 1)
		{
			printf("\n Please enter a different value from 1\n");
		}
		else
		{
			printf("\n Please enter a value greater than 0\n");
		}
		printf("If you want exit, please enter 'y':");
		scanf_s(" %c", &e);
		if (e == 'y')
			break;
	}
}