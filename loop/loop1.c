#include<stdio.h>
#include<cs50.h>

int main (void)

{int k = 6;

    for (int n = 0; n < k; n ++)

    {


    for (int i = 0; i < (k-n); i ++ )
    {
        printf (" ");

    }
    for (int j = 0; j <= (n); j++ )
    {
        printf ("#");
    }
    printf ("\n");
    }


}
