#include <stdio.h>
#define size 10

int main()
{
    int num[10];
    int even =0;
    int odd =0;
    int n;
    // Input
    for (n = 0; n < size; n++)
    {
        printf("Enter the value %d: ", n + 1);
        scanf("%d", &num[n]);
    // check
    if (num[n] % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    }


    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

}