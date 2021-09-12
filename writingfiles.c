#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fpointer = fopen("btsaimanokpoperuiuiui.txt", "w");

    fprintf(fpointer, "Os membro do Bitiéss aí mano:\n-Suga\n-Namjoon\n-Biscoito\n-Daniel Molo\n-Jimin\n-Jhope\n-Tae-hyung");

    fclose(fpointer);
    return 0;
}