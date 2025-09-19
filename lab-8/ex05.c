#include <stdio.h>

int sum_even (int arr[], int n){
    int sum =0;
    for (int i = 0; i<n; i++){
        if(arr[i]%2==0){
            sum += arr[i];
        }
    }
    return sum;
}

int sum_odd (int arr[], int n){
    int sum =0;
    for (int i = 0; i<n; i++){
        if(arr[i]%2==1){
            sum += arr[i];
        }
    }
    return sum;
}


int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i =0; i<n; i++){
        printf("Input: ");
        scanf("%d", &arr[i]);

    }

    int ans_even = sum_even(arr, n);
    int ans_odd = sum_odd(arr, n);

    printf("Output: Sum of even number: %d  \n\tSum of odd number: %d\n",ans_even,ans_odd);
}
