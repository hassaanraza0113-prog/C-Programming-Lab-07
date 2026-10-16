#include <stdio.h>

int main()
{
    char student_names[3][50];
    int marks[3][3];
    int i, j, total;
    float average;

    for (i = 0; i < 3; i++)
    {
        printf("Enter full name of student %d: ", i + 1);
        scanf(" %49[^\n]", student_names[i]);

        total = 0;

        for (j = 0; j < 3; j++)
        {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total = total + marks[i][j];
        }

        average = total / 3.0;

        printf("\nStudent: %s\n", student_names[i]);
        printf("Average marks: %.2f\n\n", average);
    }

    return 0;
}
