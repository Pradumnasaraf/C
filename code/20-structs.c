#include<stdio.h>
#include <string.h>

int main(){

    // Struct is used to build complex data structure

    struct Student {
        char name[100];
        int age;
        char major[100];
        double gpa;
    };

    // Student 1
    struct Student student1;
    student1.age =22;
    strcpy(student1.name, "Tom");
    strcpy(student1.major, "B.Tech");
    student1.gpa = 2.9;

    // Student 2
    struct Student student2;
    student2.age =25;
    strcpy(student2.name, "Jhon");
    strcpy(student2.major, "B.Phram");
    student2.gpa = 1.9;

    printf("%f\n", student1.gpa);
    printf("%d\n", student1.age);
    printf("%f\n", student2.gpa);
    printf("%d\n", student2.age);
    
}