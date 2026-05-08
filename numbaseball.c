#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int com[3];        
    int user[3];        
    int strike, ball;
    int i, j;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 3; i++) {
        com[i] = (rand() % 9) + 1;
        for (j = 0; j < i; j++) {
            if (com[i] == com[j]) {
                i--;
                break;
            }
        }
    }

    printf("========= Start the Number Baseball Game =========\n");
    printf("Guess three numbers from 1 to 9.\n\n");

    while (1) {
        strike = 0;
        ball = 0;

        
        printf("Enter 3 number (ez: 1 2 3): ");
        scanf("%d %d %d", &user[0], &user[1], &user[2]);

      
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (com[i] == user[j]) {
                    if (i == j) strike++; 
                    else ball++;         
                }
            }
        }

        if (strike == 3) {
            printf("\correct! [3 Strike] End the game.\n");
            break;
        } else if (strike == 0 && ball == 0) {
            printf("result: OUT!!\n\n");
        } else {
            printf("result: %d Strike, %d Ball\n\n", strike, ball);
        }
    }

    return 0;
}
