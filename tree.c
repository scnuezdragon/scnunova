#include <stdio.h>

int main() {
    printf("----------- Made of tree --------------\n");

    for (int i = 0; i < 4; i++) printf(" ");
    for (int i = 0; i < 1; i++) printf("*");
    printf("\n");

    for (int i = 0; i < 3; i++) printf(" ");
    for (int i = 0; i < 3; i++) printf("*");
    printf("\n");

    for (int i = 0; i < 2; i++) printf(" ");
    for (int i = 0; i < 5; i++) printf("*");
    printf("\n");

    for (int i = 0; i < 1; i++) printf(" ");
    for (int i = 0; i < 7; i++) printf("*");
    printf("\n");

    for (int i = 0; i < 0; i++) printf(" "); 
    for (int i = 0; i < 9; i++) printf("*");
    printf("\n");

    for (int i = 0; i < 3; i++) printf(" ");
    printf("###\n");

    return 0;
}
