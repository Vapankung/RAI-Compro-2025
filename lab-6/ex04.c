#include <stdio.h>
int main(){
    struct vector{
        float x;
        float y;
    };
    struct vector u,v,result;

    printf("ux: ");
    scanf("%f",&u.x);
    printf("uy: ");
    scanf("%f",&u.y);

    printf("vx: ");
    scanf("%f",&v.x);
    printf("vy: ");
    scanf("%f",&v.y);

    result.x = u.x + v.x;
    result.y = u.y + v.y;
    printf("Resultant vector is equivalence to %.1fi + %.1fj", result.x, result.y);

    return 0;
}