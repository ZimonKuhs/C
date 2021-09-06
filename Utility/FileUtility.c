/**
 *  Utility functions for file and file content management.
 *
 *  @author Zimon Kuhs
 *  @date   2021-07-05
 */

#include "./ProgramUtility.c"
#include <stdio.h>
#include <stdlib.h>

/**
 *  Calculates the number of lines in a file.
 *
 *  @param file Pointer to the file to investigate.
 *  @return     The number of lines in the file.
 */
size_t numberOfLines(FILE *file) {
    char character;
    size_t lines = 0;

    while (character != EOF) {
        if (character == '\n') {
            lines++;
        }
        character = getc(file);
    }
    rewind(file);
    return lines;
}

/**
 *  Retrieves the contents of a file as an array of strings.
 *
 *  @param file Pointer to the file to parse.
 *  @return     The string lines from the file.
 */
char** fileAsLines(char *fileName) {

    FILE *file = fopen(fileName, "r");
    if (!file) {
        printf("Error reading file %s.", fileName);
    }

    size_t nLines = numberOfLines(file);

    char *lines[nLines];
    for (size_t i = 0; i < nLines; ++i) {
        size_t n = 0;

        getline(&lines[i], &n, file);

        if (ferror(file)) {
            printf("Error while reading file: %s at line %u.", fileName, i);
            exit(1);
        }
    }

    fclose(file);

    return lines;
}
