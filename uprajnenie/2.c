#include <stdio.h>

#define BIGGER(a, b) (((a) > (b))?a:b);

int main() {
    int c = BIGGER(5, 7);
    printf("%d", c);
}