#include <stdio.h>

int main() {
    float height;
    float radius;
    float volume;
    float pi;
    pi = 3.14;

    printf("Enter cone height: ");
    scanf("%f",&height);

    printf("Enter cone base radius: ");
    scanf("%f",&radius);

    volume = (1.0 / 3) *pi*radius*radius*height;
    printf("Cone volume = %.1f", volume);

    if(volume > 260){
        printf("\n\nThis cone is perfect for Supun project");
    }else{
        printf("\n\nThis cone is not fit for this project");
    }


    return 0;
}
