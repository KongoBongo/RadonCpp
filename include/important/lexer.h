#ifndef RDN_LEXER_H
#define RDN_LEXER_H

#include <any>

#include "../token.h"

any[][] lexer_start(TokenList* list, char* source);

#endif // RDN_LEXER_H