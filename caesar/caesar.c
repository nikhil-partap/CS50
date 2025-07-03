#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{ // checking if the user input only two strings not more
    if (argc != 2)
    {
        printf("Usage: ./ceaser key\n");
        return 1;
    }
    // Check if all characters in argv[1] are digits
    // one by one because isdigit function only takes one input at a time so giving it the character
    // of string one by one not whole string at once
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./ceaser key\n");
            return 1;
        }
    }
    // converting each string (no present in form of string) to int // and assiging the value to key
    int key = atoi(argv[1]);
    // getting plain text
    string plaintext = get_string("plaintext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    { // lower case saved
        if (islower(plaintext[i]))
        {
            plaintext[i] = ((plaintext[i] - 'a' + key) % 26) + 'a';
        }
        // upper case saved
        else if (isupper(plaintext[i]))
        {
            plaintext[i] = ((plaintext[i] - 'A' + key) % 26) + 'A';
        }
        // non alphabetic saved
        else
        {
            plaintext[i] = plaintext[i];
        }
    }
    printf("ciphertext: %s\n", plaintext);
    return 0;
}
