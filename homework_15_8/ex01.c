#include <stdio.h>

int main()
{
    int matrix[3][3] = {1, 0, -1,
                        -1, 2, 3,
                        2, 4, 5};
    int r, c;

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r != c)
            {
                matrix[r][c] = 0;
            }
        }
    }

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%5d", matrix[r][c]);
        }
        printf("\n");
    }
}
