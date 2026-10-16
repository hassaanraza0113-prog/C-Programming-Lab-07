#include <stdio.h>

int main()
{
    char messages[3][100];
    int i, j, words;
    int in_word;

    for (i = 0; i < 3; i++)
    {
        printf("Enter message %d: ", i + 1);

        scanf(" %99[A-Za-z ]", messages[i]);

        while (getchar() != '\n')
        {
        }
    }

    printf("\nFiltered Messages:\n");

    for (i = 0; i < 3; i++)
    {
        words = 0;
        in_word = 0;

        for (j = 0; messages[i][j] != '\0'; j++)
        {
            if (messages[i][j] != ' ' && in_word == 0)
            {
                words++;
                in_word = 1;
            }
            else if (messages[i][j] == ' ')
            {
                in_word = 0;
            }
        }

        printf("Message: %s\n", messages[i]);
        printf("Words: %d\n\n", words);
    }

    return 0;
}
