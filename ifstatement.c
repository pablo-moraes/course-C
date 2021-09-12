#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2) {
//     if(num1 > num2) {
//         return num1;
//     } else {
//         return num2;
//     }
    return (num1 > num2) ? num1 : num2;
}

int maxBetweenThree(int n1, int n2, int n3) {
    // int result;
    // if(n1 > n2 && n1 > n3) {
    //     result = n1;
    // } else if (n2 > n1 && n2 > n3) {
    //     result = n2;
    // } else {
    //     result = n3;
    // }

    return (n1 > n2 && n1 > n3) ? n1 : (n2 > n1 && n2 > n3) ? n2 : n3;
    // return result;
}

int main() {
    printf("Max number between 2: %d", max(18, 9));
    printf("\nMax number between 3: %d", maxBetweenThree(8, 5, 14));
}