#include <stdio.h>

int main()
{
    int x, y;
    printf("Input number of rows : ");
    scanf_s("%d", &y);
    x = y;
    for (int i = 1; i <= y; i++)
    {
        for (int k = x; k >= 1; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        x--;
    }
    getchar();
    return 0;
}