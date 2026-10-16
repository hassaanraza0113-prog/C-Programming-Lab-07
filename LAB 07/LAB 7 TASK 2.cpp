#include <stdio.h>

int main()
{
    char logs[3][3][30];
    int i, j, count = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter CSV log (username,status,time): ");

        scanf(" %29[^,],%29[^,],%29[^\n]",
              logs[i][0], logs[i][1], logs[i][2]);

        getchar();
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; logs[i][0][j] != '\0'; j++)
        {
            if (logs[i][0][j] >= 'A' &&
                logs[i][0][j] <= 'Z')
                count++;
        }

        for (j = 0; logs[i][1][j] != '\0'; j++)
        {
            if (logs[i][1][j] >= 'A' &&
                logs[i][1][j] <= 'Z')
                count++;
        }

        for (j = 0; logs[i][2][j] != '\0'; j++)
        {
            if (logs[i][2][j] >= 'A' &&
                logs[i][2][j] <= 'Z')
                count++;
        }
    }

    printf("\nTotal uppercase letters: %d\n", count);

    return 0;
}
