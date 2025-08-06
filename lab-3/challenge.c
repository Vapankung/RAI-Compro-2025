#include <stdio.h>
int main(){
    float cal_sc, phy_sc, com_sc;
    float cal_num, phy_num, com_num;
    char cal_grade, phy_grade, com_grade;
    float gpa;


    printf("Calculus score: ");
    scanf("%f",&cal_sc);
    printf("Physic score: ");
    scanf("%f",&phy_sc);
    printf("compro score: ");
    scanf("%f",&com_sc);

    //grade cal

       if(cal_sc >= 80)
    {
        cal_grade = 'A';
        cal_num = 4.0;

    }else if(cal_sc >= 70 && cal_sc < 80){
        cal_grade = 'B';
        cal_num = 3.0;

    }else if(cal_sc >= 60 && cal_sc < 70){
        cal_grade = 'C';
        cal_num = 2.0;

    }else if(cal_sc >= 50 && cal_sc < 60){
        cal_grade = 'D';
        cal_num = 1.0;

    }else {
        cal_grade = 'F';
        cal_num = 0.0;
    }
 
        //grade phy

       if(phy_sc >= 80)
    {
        phy_grade = 'A';
        phy_num = 4.0;

    }else if(phy_sc >= 70 && phy_sc < 80){
        phy_grade = 'B';
        phy_num = 3.0;

    }else if(phy_sc >= 60 && phy_sc < 70){
        phy_grade = 'C';
        phy_num = 2.0;

    }else if(phy_sc >= 50 && phy_sc < 60){
        phy_grade = 'D';
        phy_num = 1.0;

    }else {
        phy_grade = 'F';
        phy_num = 0.0;
    }
 
        //grade com

       if(com_sc >= 80)
    {
        com_grade = 'A';
        com_num = 4.0;

    }else if(com_sc >= 70 && com_sc < 80){
        com_grade = 'B';
        com_num = 3.0;

    }else if(com_sc >= 60 && com_sc < 70){
        com_grade = 'C';
        com_num = 2.0;

    }else if(com_sc >= 50 && com_sc < 60){
        com_grade = 'D';
        com_num = 1.0;

    }else {
        com_grade = 'F';
        com_num = 0.0;
    }

    //GPA
    gpa = (com_num + cal_num + phy_num)/3.0;

    //Display
    printf("\n%-10s %-10s %-10s %-10s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------------\n");
    printf("%-10s %-10.0f %-10c %-10.1f\n", "Cal", cal_sc, cal_grade, cal_num);
    printf("%-10s %-10.0f %-10c %-10.1f\n", "Physics", phy_sc, phy_grade, phy_num);
    printf("%-10s %-10.0f %-10c %-10.1f\n", "compro", com_sc, com_grade, com_num);
    printf("\nGPA: %.1f\n", gpa);

}