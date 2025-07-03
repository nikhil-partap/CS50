#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}person;
int n = 3;
int main (void)
{
    person people[n];

    people[0].name = "david";
    people[0].number = "+1-617-495-1000";

    people[1].name = "john";
    people[1].number = "+1-949-468-2750";

    people[2].name = "yuliia";
    people[2].number = "+1-617-495-1000";

    string username = get_string("Name: ");

    for (int i = 0; i < n; i ++)
    {
        if (strcmp(people[i].name, username) == 0)
        {
            printf("found %s \n", people[i].number);
            return 0;
        }
    }
    printf("Not found");
    return 1;

}
