#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    printf("age's memory address: %p\nGrade address:%p\n", &age, &gpa);
    printf("%p\n%p", pAge, pGpa);
}