/**
 *  Utility functions for program management.
 *
 *  @author Zimon Kuhs
 *  @date   2021-07-05
 */

#include <stdio.h>
#include <stdlib.h>

/**
 *  Prints an error message and then terminates program execution.
 *
 *  @param message  The message to print.
 */
void error(char* message) {
    printf("%s", message);
    exit(1);
}
