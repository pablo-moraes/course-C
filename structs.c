#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() {

    struct  Student student1;
    student1.age = 20;
    student1.gpa = 3.2;
    strcpy(student1.name, "Pabo");
    strcpy(student1.major, "TI");

    struct  Student student2;
    student2.age = 18;
    student2.gpa = 4.0;
    strcpy(student2.name, "Ace");
    strcpy(student2.major, "IT");
    
    printf("%s", student2.name);
    
    return 0;
}