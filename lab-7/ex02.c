#include <stdio.h>

int main(){
	int a = 0;
	int b = 5;

    int *p1 = &a;
    int *p2 = &b;

    int temp;

    printf("Before reverse: a = %d, b = %d\n",a,b);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After reverse: a = %d, b = %d\n",a,b);


    

 
}