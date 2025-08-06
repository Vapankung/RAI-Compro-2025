#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n >= 1 && n <=100){
        if(n % 2 == 0){
            printf("%d is even\n",n);
        } else{
            printf("%d is odd\n",n);
        }
    }else{
        printf("%d is out of range\n",n);
    }
}