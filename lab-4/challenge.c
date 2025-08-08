#include <stdio.h>

int main()
{
    float balance = 0.0;
    float amount;
    int menu;

    do{
        printf("====== ATM MENU ======\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Choose an option ");
        scanf("%d", &menu);

        if(menu == 1){
           
            printf("\nCurrent Balance : %.2f\n", balance);


        }else if(menu == 2){
            
            printf("\nEnter amount to deposit : ");
            scanf("%f", &amount);
            balance =balance + amount;
            

        }else if(menu == 3){
            printf("\nEnter amount to deposit : ");
            scanf("%f", &amount);
            balance = balance - amount;
            if (amount<balance){
                printf("Withdrawal successful.\n");
            }
            else{
                printf("Withdrawal unsucessful.\n");
            }
            
        }else if(menu == 4){
            printf("Thank you for using the ATM.\n");
        }

    }
    while(menu != 4);
        return 0;
    
}