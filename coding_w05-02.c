#include <stdio.h>

int main() {
    char name[30];
    int age;
    float hight;
    char subject;
    float grade;
    char gradechar;


    printf("Enter your name, age, hight, subject, grade, gradechar: ");
    scanf("%c %d %f %c %f %c", &name, &age, &hight, &subject, &grade, &gradechar);


    printf("%c is %d years old and %.2f centimeters tall.\n", name, age, hight);
    printf()
   
}
