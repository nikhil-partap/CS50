#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

    // check the user input only two strings not more
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // check the second string has only 26 characters
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }

    // check in the second key all 26 characters are alphabets
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("please input alphabets only\n");
                return 1;
            }
        }
    }

    // get a character from key
    for (int a = 0; a < 26; a++)
    {
        char l1 = toupper(argv[1][a]);
        for (int b = 0; b < 26; b++)
        {
            if ((a != b) && (l1 == toupper(argv[1][b])))
            {
                printf("key is repeated");
                return 1;
            }
        }
    }
    // check that character if it exits

    // announce the key
    string key = argv[1];

    // printf ("key %s \n", key);

    // take the plain text from the user
    string text = get_string("plaintext: ");

    // text = toLower(text);
    // string ans = "";

    for (int i = 0, n = strlen(text); i < n; i++)
    {

        if (isupper(text[i]))
        {
            if (isupper(argv[1][text[i] - 'A']))
            {
                text[i] = argv[1][text[i] - 'A'];
            }
            else
            {
                text[i] = argv[1][text[i] - 'A'] - 32;
            }
        }
        else if (islower(text[i]))
        {
            if (islower(argv[1][text[i] - 'a']))
            {
                text[i] = argv[1][text[i] - 'a'];
            }
            else
            {
                text[i] = argv[1][text[i] - 'a'] + 32;
            }
        }
        else
        { // leaving  spaces etc as it is
            text[i] = text[i];
        }
    }

    // print the ciphertext

    printf("ciphertext: %s\n", text);

    return 0;
}
