#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct TestCase {
    unsigned int n;
    unsigned int k;
} TestCase;

TestCase **parseTests(TestCase **tests, unsigned int nTests, char **argv);

int main(int argc, char **argv) {
    // TODO: Add error checks for argc != 2; argv[1] should point to input file.

    unsigned int nTests = argc - 2;
    TestCase *tests = malloc(nTests * sizeof(TestCase));
    parseTests(&tests, nTests, argv);
}

/**
 * @param tests     The array to fill with test cases.
 * @param nTests    The number of test cases.
 * @param argv      TODO: Rename. | The string representation of test cases.
 **/
TestCase **parseTests(TestCase **tests, unsigned int nTests, char **argv) {
    for (int i = 0; i < nTests; ++i) {
        char *input = "";
        strcpy(input, argv[i]);

        char* first = strtok(input, " ");
        char* second = strtok(NULL, " ");

        tests[i]->n = strtol(first, NULL, 10);
        tests[i]->k = strtol(second, NULL, 10);
    }

    return tests;
}