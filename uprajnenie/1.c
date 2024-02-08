#include <stdio.h>

#define n 5
#define ELEMENTS {1, 2, 3, 4, 5};
#define PRINT_ARRAY for(int i = 0; i < n; i++) {\
    printf("%d", array[i]);\
}

int main() {
    int array[n] = ELEMENTS
    PRINT_ARRAY
}