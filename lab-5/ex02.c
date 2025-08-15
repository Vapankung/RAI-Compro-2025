#include <stdio.h>
int main()
{
int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

printf("Reversed Array: ");
for(int i =8; i>=0;i-- ){
    printf("%d ", original[i]);
}
printf("\n");
}