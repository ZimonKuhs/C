/**
 *  Represents an ATM machine.
 *
 *  @author Zimon Kuhs
 *  @date   2021-07-05
 */

#include <stdio.h>
#include <stdlib.h>
#include "../Utility/ProgramUtility.c"

/**
 *  Parses an amount and a balance, calculating the new balance after a withdraw is made.
 *  <p>
 *  TODO: If a withdraw is not applicable (balance too low) no warning is reported.
 *  TODO: Should not be a simple main method.
 *
 *  @param argc The amount of arguments to the program.
 *  @param argv The arguments to the program.
 */
int main(int argc, char **argv) {
    if (argc != 3) {
        error("Usage: atm [transaction amount] [initial balance]");
    }

    char* amountString = argv[1];
    char* balanceString = argv[2];

    size_t amount = strtol(amountString, &amountString, 10);
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
