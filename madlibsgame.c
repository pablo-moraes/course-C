#include <stdio.h>
#include <stdlib.h>

void limpaTela(num) {
    for (size_t i = 0; i < num; i++)
    {
        printf("\n");
    }
    
}

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);

    limpaTela(8);
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s", celebrityF, celebrityL);
}