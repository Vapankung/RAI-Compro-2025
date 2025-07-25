#include <stdio.h>
int main(){
    char name[20];
    int age;
    float height;
    int weight;
    char gender[20];
    char EdQualification[40];
    char EdQualification2[40];

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your weight: ");
    scanf("%d",&weight);
    printf("Enter your gender: ");
    scanf("%s",gender);
    printf("Enter your Education Qualification: ");
    scanf("%s %s",EdQualification,EdQualification2);

    printf("\nName: %s\n Age: %d\n Gender: %s\n Height: %.1f\n Weight: %d\n Education: %s %s\n", name,age,gender,height,weight,EdQualification,EdQualification2 );
}