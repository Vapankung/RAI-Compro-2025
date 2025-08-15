#include <stdio.h>
#define size 8

int main()
{
    int num[size];

    int n,temp;
    // Input
    for (n = 0; n < size; n++)
    {
        printf("Enter the number %d: ", n + 1);
        scanf("%d", &num[n]);

    }
        //min
    for(n=0;n<size-1;n++){
        if(num[n]<num[n+1]){
            temp = num[n+1];
            num[n+1] = num[n];
            num[n]=temp;

        }
    }
    printf("Smallest number: %d\n", num[size-1]);
    //max
    for(n=0;n<size-1;n++){
        if(num[n]>num[n+1]){
            temp = num[n+1];
            num[n+1] = num[n];
            num[n]=temp;

        }
    }
    printf("Largest number: %d\n", num[size-1]);

}