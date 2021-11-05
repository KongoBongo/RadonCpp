#ifndef RDN_TOKEN_H
#define RDN_TOKEN_H

struct _Token {
    int data;
    int type;
    int line;
};
typedef struct _Token Token;

struct _TokenList {
    Token** data;
    int ptr;
    int size;
}

#endif