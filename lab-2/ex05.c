#include <stdio.h>
int main(){

    char first_name[40];
    char last_name[40];
    int age;
    float height;
    char uni[20];

    printf("Enter your full name: ");
    scanf("%s %s",first_name, last_name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter you University name: ");
    scanf("%s",uni);

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.",last_name[0],first_name,uni,age,height);

}