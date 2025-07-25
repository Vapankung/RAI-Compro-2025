#include <stdio.h>
int main(){
    char name[20];
    int stID;
    int ProgramingSc;
    float physicSc;
    float CalSc;
    float GPA;



    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%d", &stID);
    printf("Enter your Programming score: ");
    scanf("%d", &ProgramingSc);
    printf("Enter your Physics score: ");
    scanf("%f", &physicSc);
    printf("Enter your Calculus score: ");
    scanf("%f", &CalSc);

    GPA = (ProgramingSc + physicSc + CalSc)/3;

    printf("\nHi %s(%d)! Your GPA is %.2f",name,stID,GPA);
}