#include <stdio.h>
int main(){
    int i;

    printf("Multiplication table of 2\n");
    for(i=1; i<=12;i++){
        printf("2 * %2d = %2d\n",i,i*2);
    }
}
