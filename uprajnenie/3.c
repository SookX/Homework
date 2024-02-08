#include <stdio.h>
#define DEBUG(X) printf(#X " = %d " "in  %s %d " , X ,  __FILE__, __LINE__)

int main() {
    int something = 5;
    DEBUG(something);
}