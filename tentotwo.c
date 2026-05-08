#include <stdio.h>

int main() {
    int my_ten;
    int my_two[32];
    int i = 0;

    printf("2진수로 변환할 10진수 숫자를 입력하세요: ");
    scanf("%d", &myten);


    if (my_ten == 0) {
        printf("Enter a decimal number to convert to binary: 0\n");
        return 0;
    }

   
    while (my_ten > 0) {
        my_two[i] = my_ten% 2; 
        my_ten = my_ten / 2;   
        i++;                     
    }

    printf("Enter a decimal number to convert to binary: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
