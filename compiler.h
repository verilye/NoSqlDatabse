#ifndef database_compiler
#define database_compiler

#include "common.h"


// Chunks of data are created by the parser and read by the VM
typedef struct{
    // details for the 
    int count;
    int capacity;


    uint8_t* opCode;
    
}Chunk;





#endif