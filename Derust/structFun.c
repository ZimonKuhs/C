#include <stdio.h>
#include <stdlib.h>

struct Cubeoid {
    unsigned int d;
    unsigned int h;
    unsigned int w;
};

void swap(struct Cubeoid* cube1, struct Cubeoid* cube2) {
    unsigned int t1 = cube1->d, t2 = cube1->h, t3 = cube1->w;
    cube1->d = cube2->d, cube1->h = cube2->h, cube1->w = cube2->w;
    cube2->d = t1, cube2->h = t2, cube2->w = t3;
}

unsigned int volume(struct Cubeoid cube) {
    return cube.d * cube.h * cube.w;
}

int main(int argc, char **argv) {
    struct Cubeoid c1 = {1, 2, 3}, c2 = {4, 5, 6};
    printf("%d and %d!\n", volume(c1), volume(c2));
    swap(&c1, &c2);
    printf("%d and %d!\n", volume(c1), volume(c2));
}