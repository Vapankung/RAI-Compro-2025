#include <stdio.h>
int main(){
    int time;
    int hr ;
    int min ;
    printf("Enter total minutes: ");
    scanf("%d",&time);
    hr = time / 60;
    min = time % 60;
    printf("%d minutes is %d hour(s) and %d minute(s)",time, hr, min);
    return 0;
}