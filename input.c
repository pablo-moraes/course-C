#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char name[20];
    // printf("Enterrr your name: ");
    // scanf("%s", &name);
    // printf("Your name is %s", name);
    char name[20];
    printf("Enter your dog name: ");
    fgets(name, 20, stdin);
    printf("Your dog name is: %s", name);
    return 0;
}