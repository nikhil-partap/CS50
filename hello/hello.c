#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string answer = get_string ("what's your name? ");
    printf ("hi %s \n ", answer );
}
