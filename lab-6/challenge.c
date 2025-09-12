#include <stdio.h>
#define NUM_STUDENT 3
#define NUM_SUBJ 4

int main()
{
    struct Student
    {
        char name[20];
        int id;
        int grade[NUM_SUBJ];
        float average;
    };

    struct Student students[NUM_STUDENT];
    char subjects[NUM_SUBJ][20] = {"Math", "English", "Science", "History"};
    float subjectTotals[NUM_SUBJ] = {0};
    float subjectAverages[NUM_SUBJ];
    int i, j;

    for (i = 0; i < NUM_STUDENT; i++)
    {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%s %d", students[i].name, &students[i].id);
        for (j = 0; j < NUM_SUBJ; j++)
        {
            scanf("%d", &students[i].grade[j]);
            students[i].average += students[i].grade[j];
            subjectTotals[j] += students[i].grade[j];
        }
        students[i].average /= NUM_SUBJ;
    }

    printf("\nStudent Averages:\n");
    for (i = 0; i < NUM_STUDENT; i++)
    {
        printf("%s (ID: %d): %.2f\n",
               students[i].name, students[i].id, students[i].average);
    }

    int topIndex = 0;
    for (i = 1; i < NUM_STUDENT; i++)
    {
        if (students[i].average > students[topIndex].average)
        {
            topIndex = i;
        }
    }
    
    printf("\nTop Student: %s with %.2f\n", students[topIndex].name, students[topIndex].average);
    printf("\nSubject Averages:\n");

    int topSubjectIndex = 0;
    for (j = 0; j < NUM_SUBJ; j++)
    {
        subjectAverages[j] = subjectTotals[j] / NUM_STUDENT;
        printf("%s: %.2f\n", subjects[j], subjectAverages[j]);
        if (subjectAverages[j] > subjectAverages[topSubjectIndex])
        {
            topSubjectIndex = j;
        }
    }
    printf("\nTop Subject: %s with average %.2f\n", subjects[topSubjectIndex], subjectAverages[topSubjectIndex]);

    return 0;
}
