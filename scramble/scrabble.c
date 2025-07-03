#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int point[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // two different user input like player 1 and player 2

    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    // calculate the score of words entered by players

    // score of p1

    int point1 = 0;
    for (int i = 0, n = strlen(p1); i < n; i++)
    {
        if (isupper(p1[i]))
        {
            point1 += point[p1[i] - 'A'];
        }
        else if (islower(p1[i]))
        {
            point1 += point[p1[i] - 'a'];
        }
        else
        {
            point1 += 0;
        }
    }

    // score p2
    int point2 = 0;
    for (int i = 0, n = strlen(p2); i < n; i++)
    {
        if (isupper(p2[i]))
        {
            point2 += point[p2[i] - 'A'];
        }
        else if (islower(p2[i]))
        {
            point2 += point[p2[i] - 'a'];
        }
        else
        {
            point2 += 0;
        }
    }

    // A B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X
    // Y   Z

    // 1	3	3	2	1	4	2	4	1	8	5	1	3	1	1	3	10	1	1	1	1	4	4
    // 8	4	10

    // print the winner by comparing the score of both players

    if (point1 > point2)
    {
        printf("Player 1 wins!\n");
    }
    else if (point2 > point1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
