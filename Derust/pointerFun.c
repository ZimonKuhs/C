#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv) {
    int a = -1, b = -2, c = -3;
    int *x = (int *) malloc(sizeof(int));
    int *y = (int *) malloc(sizeof(int));
    int *z = (int *) malloc(sizeof(int));

    printf("a: %d, b: %d, c: %d, x: %d, y: %d, z: %d\n", a, b, c, *x, *y, *z);

    x = &a;
    y = &b;
    z = &c;

    printf("%d, %d, %d!\n", *x, *y, *z);

    return 0;
}