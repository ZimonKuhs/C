#include <stdio.h>
#include <stdlib.h>

void error(char* message) {
    printf("%s", message);
    exit(1);
}