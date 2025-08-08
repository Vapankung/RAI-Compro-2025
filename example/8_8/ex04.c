#include <stdio.h>
int main()
{
    int sum = 0, count,final;
    printf("INPUT final: ");
    scanf("%d", &final);

    for(count=1; count<=final;count++){
        if(count%2==1){ //even number
            sum = sum + count;
        }
        
    }
    printf("%d\n", sum);
}