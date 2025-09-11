#include <stdio.h>

int main()
{
    int i;
    int temp;
    struct profile
    {
        char name[100];
        char surname[100];
        int age;
        float score;
        
    } s[3];

    for ( i = 0; i < 3; i++)
    {
    printf("Student %d's name: ",i+1);
    scanf("%s %s",s[i].name, s[i].surname);
    printf("Student %d's age: ",i+1);
    scanf("%d",&s[i].age);
    printf("Student %d's score: ",i+1);
    scanf("%f",&s[i].score);

    }
    int max = 0;

    //max
    for(i=0;i<3;i++){
        if(s[i].score > s[max].score){
            max = i;
        }
    }


    printf("The highest scores belongs to %s %s at %.1f scores!", s[max].name, s[max].surname, s[max].score);



}
   