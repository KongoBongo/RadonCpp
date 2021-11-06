#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/util.h"
#include "../include/parser.h"
#include "../include/token.h"

int main(int argc, char** argv) {
    if (argc < 3) {
        // return help
        return 1;
    }

    if (strcmp(argv[1], "compile") == 0) {
        char* source = readfile(argv[2]);
        TokenList tokens;
        praser_start(&tokens);

        free(source);
    }

    return 0;
}