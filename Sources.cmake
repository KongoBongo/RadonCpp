target_sources(Rdn.main PRIVATE
    include/important/util.h
    include/important/token.h
    include/important/lexer.h
    include/important/parser.h

    src/cli/main.cpp
    src/util.cpp
    src/important/lexer.cpp
    src/important/parser.cpp
)