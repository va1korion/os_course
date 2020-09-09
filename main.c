#include <zconf.h>
#include <stdio.h>

int main() {
    int i = 0;
    while (1){
        fork();
        printf("How many forks? %i", i);
    }
}