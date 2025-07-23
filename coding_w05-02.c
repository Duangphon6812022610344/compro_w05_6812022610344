#include <stdio.h>

int main() {
    char name[30]; // ประกาศตัวแปรสำหรับเก็บชื่อ
    int age; // ประกาศตัวแปรสำหรับเก็บอายุ
    float hight; // ประกาศตัวแปรสำหรับเก็บส่วนสูง
    char subject; // ประกาศตัวแปรสำหรับเก็บวิชา
    float grade; // ประกาศตัวแปรสำหรับเก็บเกรด
    char gradechar; // ประกาศตัวแปรสำหรับเก็บรหัสเกรด


    printf("Enter your name, age, hight, subject, grade, gradechar: "); // ข้อความให้ผู้ใช้ป้อนข้อมูล
    // รับข้อมูลจากผู้ใช้ โดยใช้ %s สำหรับสตริง, %d สำหรับจำนวนเต็ม, %f สำหรับจำนวนทศนิยม, และ %c สำหรับตัวอักษร
    scanf("%s %d %f %c %f %c", name, &age, &hight, &subject, &grade, &gradechar); // รับข้อมูลจากผู้ใช้


    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, hight); // แสดงข้อมูลชื่อ, อายุ, และส่วนสูง
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, gradechar); // แสดงข้อมูลวิชา, เกรด, และรหัสเกรด

    return 0; // คืนค่า 0 เพื่อบ่งชี้ว่าการทำงานสำเร็จ

}
