#include <stdio.h>
int main(){
    int i;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d\n",num);
    for(i=1; i<=12;i++){
        printf("%d x %2d = %2d\n",num,i,i*num);
    }
}
