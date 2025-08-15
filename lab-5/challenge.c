#include <stdio.h>

int main()
{
    int array[100], freq[100] = {0};
    int i, n, count;
    count = 1;

    // input
    printf("Enter the number of element: ");
    scanf("%d", &n);

    printf("Enter %d integer", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        freq[array[i]]++;
    }

    // frequency
    for (i = 0; i < n; i++)
    {
        if (freq[array[i]] != 0)
        {
            printf("%d occurs %d times\n", array[i], freq[array[i]]);
            freq[array[i]] = 0;
        }
    }
}