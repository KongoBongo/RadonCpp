#include "../include/util.h"

char* readfile(const char* path) {
    FILE* file = fopen(path, "r");
    if (!file) {
        printf("Internal Error: Couldn't open file %s\n", path);
        printf("\tMake sure that this file is not being used by another program\n");
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* buf = (char*) malloc(sizeof(char) * (size + 1));
    if (!buf) {
        printf("Internal Error: Failed to allocate memory to read file %s\n", path);
        printf("\tMake sure that you have enough memory/RAM ready for usage.\n");
        return NULL;
    }
    fread(buf, 1, size, file);
    buf[size] = '\0';

    fclose(file);

    return buf;
}