#include <stdio.h>

int num;
int main(){
do
{
    printf("Enter the number:");
    scanf("%d",&num);
    if (num!=0){
        
        if(num%2==1){
            printf("%d is odd\n",num);
        }else{
            printf("%d is even\n",num);
        }
    }else{
         printf("");
    }


} while (num!=0);
    printf("Exit program...Bye");
}