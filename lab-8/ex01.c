#include <stdio.h>
#define PI 22.0 / 7.0

float Circum(float r)
{
    float answer = 0;
    answer = 2 * PI * r;
    return answer;
}

float Area(float r)
{
    float answer = 0;
    answer = PI * r * r;
    return answer;
}

int main()
{
    float r;
    printf("input radius : ");
    scanf("%f", &r);
    printf("Circumference: %.2f\n", Circum(r));
    printf("Area: %.2f\n", Area(r));

    return 0;
}
