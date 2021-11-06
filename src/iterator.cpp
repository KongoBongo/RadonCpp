#include "../include/iterator.h"

char iterator::next() {
    this->position++;
    this->currentChar = charAt(this->string, this->position);
    return this->currentChar;
}

char* iterator::forward(int count) {
    char[(unsigned)getSize(this->string)] total = "";
    int totalSize = 0;
    for (int i = 0; i < count + 1; i++) {
        this->position++;
        this->currentChar = charAt(this->string, this->position);
        total[totalSize++] = this->currentChar;
    }

    return total;
}