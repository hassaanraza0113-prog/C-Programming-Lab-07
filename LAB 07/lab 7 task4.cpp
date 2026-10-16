#include <stdio.h>

int main()
{
    char word_grid[3][100];
    char words[3][32];
    char longest[32];
    int i, j, length;
    int max_length = 0;
    int row = 0, col = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter 3 words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }

    for (i = 0; i < 3; i++)
    {
        sscanf(word_grid[i], "%31s %31s %31s",
               words[0], words[1], words[2]);

        for (j = 0; j < 3; j++)
        {
            length = 0;

            while (words[j][length] != '\0')
                length++;

            if (length > max_length)
            {
                max_length = length;
                row = i;
                col = j;
                sprintf(longest, "%s", words[j]);
            }
        }
    }

    printf("\nLongest word: %s\n", longest);
    printf("Length: %d\n", max_length);
    printf("Row index: %d\n", row);
    printf("Column index: %d\n", col);

    return 0;
}
