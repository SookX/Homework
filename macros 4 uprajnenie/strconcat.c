#include <stdio.h>
#include "mystrings.h"

int main(int argc, char argv[]) {
    char array = argv[0];
    for(int i = 1; i < argv; i++) {
        strconcat(array, argv[i]);
    }
    printf("%s", array);
}