#include <cs50.h>
#include <stdio.h>
void pyramid(int hight);

int main(void)
{
    int height = get_int("What should be the Height of the Pyramid's? ");
    while (height <= 0 || height > 8)
    {
        height = get_int("What should be the Height of the Pyramid's? ");
    }

    pyramid(height);
}























void pyramid(int height)
{
    int k = height;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < (k - i); j++)
        {
            printf(" ");
        }
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("  ");

        for (int p = 0; p <= i; p++)
        {
            printf("#");
        }
        for (int r = 0; r < (k - i); r++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
