#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        // TODO: Create utility file for error with message as one function.
        printf("Usage: atm [transaction amount] [initial balance]");
        exit(1);
    }

    char* amountString = argv[1];
    char* balanceString = argv[2];

    int amount = strtol(amountString, &amountString, 10);
    float balance = strtof(balanceString, &balanceString);
    float charge = amount + 0.5;

    if (charge <= balance && amount % 5 == 0) {
        balance -= charge;
    }

    printf("%.2f", balance);
}