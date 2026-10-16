#include <stdio.h>

int main()
{
    float sensor_data[3][4];
    int i, j, column;

    printf("Enter temperatures for 3 days and 4 sensors:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%f", &sensor_data[i][j]);
        }
    }

    printf("Enter column index to delete (0 to 3): ");
    scanf("%d", &column);

    if (column < 0 || column > 3)
    {
        printf("Invalid column index!\n");
        return 0;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = column; j < 3; j++)
        {
            sensor_data[i][j] = sensor_data[i][j + 1];
        }
    }

    printf("\nUpdated 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%8.2f", sensor_data[i][j]);
        }

        printf("\n");
    }

    return 0;
}
