#include <stdio.h>
#include <sys/types.h>
#include <sys/mman.h>

#define KB 1024
#define ALLOCSIZE (4 * KB)


int main() {
    char *point;
    int i = 0;
    while (1) {
        point = mmap(NULL, ALLOCSIZE, PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
        printf("%i \n", i++);

        if (point == MAP_FAILED) {
            printf("Hello there!");
            break;
        }
    }
    return (0);
}