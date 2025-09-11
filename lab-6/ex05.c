#include <stdio.h>
int main(){
    struct Time{
        int minute;
        int second;
    };
    int elapse;
    struct Time times[3];

    for(int i=0; i<3; i++){
        printf("Time input (mm:ss): ");
        scanf("%d:%d", &times[i].minute, &times[i].second);
        elapse += times[i].minute*60 + times[i].second;
        
    }
    printf("Total times elapse: %d seconds",elapse);

    return 0;
}