#include<stdio.h>
#include <cs50.h>

int main (void)
{
    int k = 6 ;
    for (int i = 0; i < k; i ++)
    {
        for(int j = 0 ; j <= i; j ++ )
        {
            printf ("#");

        }
        printf ("\n");
    }
}
