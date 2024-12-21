#ifndef database_scanner
#define database_scanner

#include "common.h"

// Tokens are derived from scanning 
// Tokens are parsed 
// Parsed chunks are read by the VM

typedef enum{

}TokenType;

typedef struct{
    TokenType type;
    const char* start;
    int length;
    int line;

}Token;


#endif