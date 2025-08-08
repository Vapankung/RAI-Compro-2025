#include <stdio.h> 

int main() {
    int i, j,num;
    char space = ' ';
    printf ("Enter number: ");
    scanf ("%d", &num);


    for (i = 1; i <= num; i++) {
        printf("\n");
        for (j = 1; j <= num; j++) {   
            if (i==1||i==num||j==1||j==num){
                printf("*");
            } else{
                printf("%c", space);
            }
        }
        
    }
    return 0;
}
