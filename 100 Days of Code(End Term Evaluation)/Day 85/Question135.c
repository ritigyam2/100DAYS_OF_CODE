//Assign explicit values starting from 10 and print them
#include <stdio.h>

enum ErrorCode {
    // Explicitly start at 10. The rest increment automatically.
    FILE_NOT_FOUND = 10, 
    ACCESS_DENIED,       // 11
    INVALID_FORMAT,      // 12
    OUT_OF_MEMORY = 20   // Explicitly jump to 20
};

int main() {
    printf("FILE_NOT_FOUND = %d\n", FILE_NOT_FOUND);
    printf("ACCESS_DENIED = %d\n", ACCESS_DENIED);
    printf("INVALID_FORMAT = %d\n", INVALID_FORMAT);
    printf("OUT_OF_MEMORY = %d\n", OUT_OF_MEMORY);
    
    // Output:
    // FILE_NOT_FOUND = 10
    // ACCESS_DENIED = 11
    // INVALID_FORMAT = 12
    // OUT_OF_MEMORY = 20

    return 0;
}