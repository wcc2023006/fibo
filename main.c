#include <stdio.h>
#include <stdlib.h>
#include "fibo.h"

int main(int argc, char *argv[]) {
    long ret;
    int n;
    if (argc < 2) {
        fprintf(stderr, "missing index.\n");
        return -1;
    }
    n = atoi(argv[1]);
    ret = fibo(n);
    printf("Fibo(%d) is %ld\n", n, ret);
    return EXIT_SUCCESS;
}

