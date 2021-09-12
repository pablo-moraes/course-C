#include <stdio.h>
#include <stdlib.h>

int main()
{
    // printf("Top");
    // sayHi("Meu nome é Pablo");
    // printf("Bottom");
    sayHi("Pablo", 20);
    sayHi("Faustão", 79);
    sayHi("Ana", 20);

    return 0;
}

void sayHi(char name[], int age) {
    printf("\nHi %s, you are %d", name, age);
}