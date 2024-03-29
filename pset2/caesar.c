#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // check for 2 total argument count, or exit program
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // convert ascii values to integer
    int k = atoi(argv[1]);

    // get string plain text, check if lowercase or upper while preserving non alpha values(letters)
    string plaintext = get_string("plaintext: ");
    // print ciphertext: plaintext[i] = a = (97 - 97 + 13) = 13 % 26 = 13 + 97 = 110 = n
    printf("ciphertext: ") for (int i = 0; i < strlen(plaintext); i++)
    {
        if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 97 + k) % 26 + 97);
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 65 + k) % 26 + 65);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
