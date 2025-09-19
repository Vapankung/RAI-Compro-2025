#include <stdio.h>

int main()
{
    int arr[5];
    int *p = arr;
    int i, j, temp;

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    printf("Sorted: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}