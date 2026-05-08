#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {
    int lotto[6]; 
    int i, j, temp;

    srand(time(NULL));

    printf("-------------- Auto make lotto number --------------\n");

    for (i = 0; i < 6; i++) {
       
        lotto[i] = (rand() % 45) + 1;

        for (j = 0; j < i; j++) {
            if (lotto[i] == lotto[j]) {
                i--; 
                break;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 6; j++) {
            if (lotto[i] > lotto[j]) {
                temp = lotto[i];
                lotto[i] = lotto[j];
                lotto[j] = temp;
            }
        }
    }

    printf("This weeks recomend number : ");
    for (i = 0; i < 6; i++) {
        printf("%d ", lotto[i]);
    }
    printf("\n============================\n");

    return 0;
}
