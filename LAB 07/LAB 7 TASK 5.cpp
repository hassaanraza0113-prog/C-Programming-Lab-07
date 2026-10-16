#include <stdio.h>

int main()
{
    char sentences[3][100];
    int i, j, vowels;

    for (i = 0; i < 3; i++)
    {
        printf("Enter sentence %d: ", i + 1);
        scanf(" %99[^;\n]", sentences[i]);

        if (i < 2)
            getchar();
    }

    for (i = 0; i < 3; i++)
    {
        vowels = 0;

        for (j = 0; sentences[i][j] != '\0'; j++)
        {
            char ch = sentences[i][j];

            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            if (ch == 'a' || ch == 'e' ||
                ch == 'i' || ch == 'o' ||
                ch == 'u')
            {
                vowels++;
            }
        }

        printf("\nSentence: %s\n", sentences[i]);
        printf("Total vowels: %d\n", vowels);
    }

    return 0;
}
