#include <iostream>
#include <fcntl.h>
#include "fsapi.h"
#include "testClient_common.h"

// this is a simple program that copy a file to program's memory

/******************************************************************************
 * PROTOTYPES
 *****************************************************************************/
void printHelp();

/******************************************************************************
 * DRIVER
 *****************************************************************************/
void printHelp(char *basename) {
    fprintf(stderr, "Usage: %s <file path>\n", basename);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printHelp(argv[0]);
        return 1;
    }
    // Open the file
    std::string pathStr = std::string("/mnt/optanemnt/data/") + std::string("t1");
    int fd = fs_open(pathStr.c_str(), O_RDONLY, 0);
    // int fd = open(argv[1], O_RDONLY);
    printf("%d", fd);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Map the file to memory by mmap()

    // Allocate a buffer to store the file by memcpy()

    // Clean up
    return 0;
}
