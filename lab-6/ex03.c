#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int max = 0;
    float distance;

    struct point
    {
        float x;
        float y;
        
    };
    struct point p1,p2;

    printf("x1: ");
    scanf("%f",&p1.x);
    printf("y1: ");
    scanf("%f",&p1.y);

    printf("x2: "); 
    scanf("%f",&p2.x);
    printf("y2: ");
    scanf("%f",&p2.y);
    distance = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)", p1.x, p1.y, p2.x, p2.y, distance);


   return 0;




}
   