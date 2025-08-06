#include <stdio.h>
int main(){
    int num1, num2, result, menu;
    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);
    printf("Calculator Menu : \n 1. +\n 2. -\n 3. *\n 4. /\n 5. %");
    printf("Choose menu: ");
    scanf("%d", &menu);
    
    switch(menu){
        case 1 :
            result = num1 + num2;
            break;
        case 2 :
            result = num1 - num2;
            break;
        case 3 :
            result = num1*num2;
            break;
        case 4 :
            result = num1/num2;
            break;
        case 5 :
            result = num1%num2;
            break;
    }
    printf("Ans : Num 1 + Num 2 = %d", result);
}