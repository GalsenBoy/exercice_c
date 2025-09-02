/*
Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students,
display their information, and find the average of total marks.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float total_marks;
};

int main()
{
    struct Student s1;
    printf("Saisir l'age 1 \n");
    scanf("%d", &s1.age);

    printf("Saisir le nom 1\n");
    scanf("%s", s1.name);

    printf("Saisir le total 1\n");
    scanf("%f", &s1.total_marks);

    struct Student s2;
    printf("Saisir l'age 2 \n");
    scanf("%d", &s2.age);
    printf("Saisir le nom 2\n");
    scanf("%s", s2.name);
    printf("Saisir le total 2\n");
    scanf("%f", &s2.total_marks);

    printf("L'utilisateur 1 est %s il a %d ans avec une note de %.2f \n", s1.name, s1.age, s1.total_marks);
    printf("L'utilisateur 2 est %s il a %d ans avec une note de %.2f \n", s2.name, s2.age, s2.total_marks);
    float average = (s1.total_marks + s2.total_marks) / 2 ;
    printf("la moyenne est de : %.2f",average);

    return 0;
}