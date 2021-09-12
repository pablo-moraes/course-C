#include <stdio.h>
#include <stdlib.h>

void clrscr() {
    // for (size_t i = 0; i < n; i++)
    // {
    //     printf("\n");
    // }    
    system("@cls||clear"); // this shit uses the system commands
}

int main()
{

    double n1;
    double n2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &n1);
    clrscr();
    printf("Options:\nMultiplication * | Sum + | Division / | Subtraction -\n");
    printf("Enter operator:");
    scanf(" %c", &op);

    printf("Enter a number: ");
    scanf("%lf", &n2);

    if(op == '+') {
        printf("%3.0f", n1 + n2);
    } else if (op == '-') {
        printf("%3.0f", n1 - n2);
    } else if (op == '/') {
        printf("%3.9f", n1 / n2);
    } else if (op == '*') {
        printf("%3.0f", n1 * n2);
    } else {
        clrscr();
        printf("Invalid operator");
    }
    return 0;
}