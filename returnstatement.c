#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
    double result = pow(num, 3);
    // double result = num * num * num;
    return result;
    printf("The print never shows because the return statement breaks the function at this point of code");
}

int main()
{
    printf("Answer: %3.0f", cube(7));
    return 0;
}