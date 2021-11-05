#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/util.h"

int main(int argc, char** argv) {
    if (argc < 3) {
        // return help
        return 1;
    }

    if (strcmp(argv[1], "compile") == 0) {
        char* source = readfile(argv[2]);
        printf("%s\n", source);
        free(source);
    }

    return 0;
}