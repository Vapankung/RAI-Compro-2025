#include <stdio.h>
#define size 5

int main(){
    int num[5],temp,n,sum;
    //Input
    for(n=0;n<size;n++){
        printf("Enter the marks of student %d: ",n+1);
        scanf("%d",&num[n]);
    }
    //sum
    for(n=0;n<size;n++){
       sum = sum+num[n];
    }
    printf("Total Marks : %d\n", sum);

    //find max
    for(n=0;n<size;n++){
        if(num[n]>num[n+1]){
            temp = num[n+1];
            num[n+1] = num[n];
            num[n] = temp;
        }
    }
    printf("Highest Marks: %d\n",num[size-1]);
    



}