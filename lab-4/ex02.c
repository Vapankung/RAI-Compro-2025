#include <stdio.h>
int main(){
    int num,count=1,sum=0;

while(count <= 10){
        printf("Enter the number: ");
        scanf("%d", &num);
        sum = num+sum;
        count++;
}

printf("Total sum is %d\n", sum);
}