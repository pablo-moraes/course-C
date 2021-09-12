#include <stdio.h>
#include <stdlib.h>

int main() {
    // int i = 1;
    // while(i <= 5) {
    //     printf("%d\n", i);
    //     i++;
    // }

    // for(i = 1; i <= 5; i++) {
    //     // printf("%d\n", i);
    // }

    // do
    // {
    //     printf("%d\n", i++);
    // } while (i < 5);
    
    int luckyNumbers[] = {4, 54, 8, 9, 10};

    int i;
    for(i = 0; i <= 4; i++) {
        printf("%d\n", luckyNumbers[i]); 
    }

    return 0;
}