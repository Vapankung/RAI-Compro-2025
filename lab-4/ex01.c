#include <stdio.h>
int main()
{
    float sum=0, num, avg;
    for(int count=1; count<=10; count++){
        printf("Enter the number: ");
        scanf("%f", &num);
        sum = num+sum;
    }
    printf("total sum is %.0f\n", sum);
    avg = sum/10;
    printf("Average is %.2f\n", avg);
}