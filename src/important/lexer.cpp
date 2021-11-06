#include "../../include/important/lexer.h"
#include "../../include/util.h"
#include "../../include/iterator.h"

any[][] lexer_start(char* source) {
    const int lineCount = getLineCount(source, getSize(source));
    any[][] lines = [];

}