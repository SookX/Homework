#include <stdio.h>
#include <string.h>
#include "safeint.h"
#include <limits.h>

int main (int argc, char *argv[]) {

    char a[strlen(argv[1]) + 1];
    char b[strlen(argv[2]) + 1];

    strcpy(a, argv[1]);
    strcpy(b, argv[2]);

    struct SafeResult string_a = safestrtoint(a);
    int a_num = string_a.value;
    printf("\nNum 1: %d", a_num);
    int a_errorflag = string_a.errorflag;
    struct SafeResult string_b = safestrtoint(b);
    int b_num = string_b.value;
    printf("\nNum 2: %d", b_num);
    int b_errorflag = string_a.errorflag;
    if(a_errorflag == '1' || b_errorflag == '1') {
        printf("\nOverflow or underflow");
    }
    else {
        struct SafeResult result = safemultiply(a_num, b_num);
        if(result.errorflag == '1')printf("\nOverflow or underflow");
        else {
            printf("\n%d", result.value);
        }
        
    }
        

    return 0;

}