#include<cs50.h>
#include<stdio.h>

int main (void)

{
    int x = get_int("what is the value of X? ");
    int y = get_int("what id the value of Y? ");

    if (x > y)
    {
        printf ("X is less than Y");
    }
    else if (x < y)
    {
        printf ("X is greater than Y");
    }
    else
    {
        printf ("X is equal to Y\n");
    }
}
