#include <stdio.h>
int main()
{
    int matrix[3][3] = {1, 0, -1,
                        -1, 2, 3,
                        2, 4, 5};
    int r, c, i;
    int product[3][3] = {0};

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            for (i = 0; i < 3; i++)
            {
                product[r][c] += matrix[r][i] * matrix[i][c];
            }
        }
    }

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%5d", product[r][c]);
        }
        printf("\n");
    }
}