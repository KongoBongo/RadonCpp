#ifndef RDN_NMSPACE_H
#define RDN_NMSPACE_H

#include <string.h>

#include "util.h"

namespace rdn {
    class string {
        private:
            std::string strn;

        public:
            int length = 0;
            string(char* str) {
                this->strn = str;
                length = getSize(str);
            }

            char charAt(int pos);
            char* find(char* toFind);
            char** split(char delim, char delim2 = NULL);
    }
}

#endif // RDN_NMSPACE_H