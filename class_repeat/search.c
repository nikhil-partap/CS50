#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main (void)
{
    string strings[] = {"battleships","boot", "cannon", "iron", "thimble", "top hat"};

    string st = get_string("string: ");

    for (int i = 0; i < 6; i ++)
    {
        if (strcmp(strings[i], st) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

