#ifndef RDN_ITER_H
#define RDN_ITER_H

#include "../include/util.h"

class iterator {
    public:
        char* string;

        int position = 0;
        char currentChar = charAt(string, position);

        iterator(char* iterate) {
            string = iterate;
        }

        char next();
        char* forward(int count);
}

#endif // RDN_ITER_H