#include <stdio.h>

int main() {
    char name[20];
    float cal_sc;
    float phy_sc;
    float sci_sc;
    float avg;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your Calculus score: ");
    scanf("%f", &cal_sc);

    printf("Enter your Physic score: ");
    scanf("%f", &phy_sc);

    printf("Enter your Science score: ");
    scanf("%f", &sci_sc);

    avg = (cal_sc + phy_sc + sci_sc)/3;

    if(avg >= 80)
    {
        grade = 'A';

    }else if(avg >= 70 && avg < 80){
        grade = 'B';

    }else if(avg >= 60 && avg < 70){
        grade = 'C';

    }else if(avg >= 50 && avg < 60){
        grade = 'D';

    }else {
        grade = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.",name,avg,grade);

    return 0;
}
