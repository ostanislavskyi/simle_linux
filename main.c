#include <stdio.h>
#include "func.h"

int main(int argc, char **argv) {
    printf("Count of args = %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    printf("summ = %d\n", summ(100, 100, 200));
}