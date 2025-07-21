#include <stdio.h>

int main() {
    char nameA;
    int ageA;
    float hightA;
    float weightA;
    char gradeA;

    char nameB;
    int ageB;
    float hightB;
    float weightB;
    char gradeB;

    char nameC;
    int ageC;
    float hightC;
    float weightC;
    char gradeC;


    printf("Enter your name, age, hight, weight, grade: ");
    scanf("%c %d %f %f %c", &nameA, &ageA, &hightA, &weightA, &gradeA);

    printf("Enter your name, age, hight, weight, grade: ");
    scanf("%c %d %f %f %c", &nameB, &ageB, &hightB, &weightB, &gradeB);

    printf("Enter your name, age, hight, weight, grade: ");
    scanf("%c %d %f %f %c", &nameC, &ageC, &hightC, &weightC, &gradeC);
   
    printf ("Name\t\tAge\tHeight(cm)\tWeight(kg)\tGrade Code");
    printf ("%c\t\t%d\t%.1f\t%.1f\t%c", nameA, ageA, hightA, weightA, gradeA);

    printf ("Name\t\tAge\tHeight(cm)\tWeight(kg)\tGrade Code");
    printf ("%c\t\t%d\t%.1f\t%.1f\t%c", nameB, ageB, hightB, weightB, gradeB);

    printf ("Name\t\tAge\tHeight(cm)\tWeight(kg)\tGrade Code");
    printf ("%c\t\t%d\t%.1f\t%.1f\t%c", nameC, ageC, hightC, weightC, gradeC);

    return 0;
}
