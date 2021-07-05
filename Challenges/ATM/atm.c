#include <stdio.h>
#include <stdlib.h>
#include "../Utility/ProgramUtility.c"

int main(int argc, char **argv) {
    if (argc != 3) {
        // TODO: Create utility file for error with message as one function.
        error("Usage: atm [transaction amount] [initial balance]");
    }

    char* amountString = argv[1];
    char* balanceString = argv[2];

    int amount = strtol(amountString, &amountString, 10);
    float balance = strtof(balanceString, &balanceString);

    if (amount < 0 || balance < 0) {
        error("Error: Can't use negative numbers.");
    }
    float charge = amount + 0.5;

    if (charge <= balance && amount % 5 == 0) {
        balance -= charge;
    }

    printf("%.2f", balance);
}