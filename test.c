#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guessedNumber, randomNumber;
    char playAgain;

    srand(time(0));

    do {
        randomNumber = rand() % 100 + 1;

        printf("Nhap mot so tu 1 den 100: ");
        scanf("%d", &guessedNumber);

        if (guessedNumber == randomNumber) {
            printf("Ban da chien thang!\n");
        } else {
            printf("Ban da doan sai. So ngau nhien la: %d\n", randomNumber);
        }

        printf("Ban co muon choi lai khong? (Y/N): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}

