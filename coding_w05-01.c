#include <stdio.h>

int main() {
    char name;
    int age;
    float weight;


    printf("Enter your name, age, and weight: ");
    scanf("%c %d %f", &name, &age, &weight);


    printf("Student %c is %d years old.\n", name,age);
    printf("His weight is %.2f kg.\n", weight);
   
}
