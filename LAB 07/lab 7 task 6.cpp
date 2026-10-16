#include <stdio.h>

int main()
{
    int shifts[4][3];
    int i, j, position;

    printf("Enter values for the original 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("Enter row index for insertion (0 to 3): ");
    scanf("%d", &position);

    if (position < 0 || position > 3)
    {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = 2; i >= position; i--)
    {
        for (j = 0; j < 3; j++)
        {
            shifts[i + 1][j] = shifts[i][j];
        }
    }

    printf("Enter 3 new values: ");

    for (j = 0; j < 3; j++)
    {
        scanf("%d", &shifts[position][j]);
    }

    printf("\nUpdated 4x3 matrix:\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", shifts[i][j]);
        }

        printf("\n");
    }

    return 0;
}
