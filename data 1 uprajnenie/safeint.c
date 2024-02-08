#include <string.h>
#include <stdio.h>
#include <limits.h>
#include "safeint.h"


struct SafeResult safeadd(int a, int b) {
    struct SafeResult result;
    result.errorflag = '0';

    int add = a + b;

    result.value = (int)add;
    if(a < 0 && b < 0 && result.value > 0) {
        result.errorflag = '1';
    }
    else if(a > 0 && b > 0 && result.value < 0) {
        result.errorflag = '1';
    }
    

    return result;
}


struct SafeResult safesubstract(int a, int b) {
    struct SafeResult result;
    result.errorflag = '0';
    int subract = a - b;
    result.value = (int)subract;
    if(a > 0 && b < 0 && result.value < 0){
        result.errorflag = '1';
    }
    else if(a < 0 && b > 0 && result.value > 0){
        result.errorflag = '1';
    }
    
    return result;
}

struct SafeResult safemultiply(int a, int b) {
    struct SafeResult result;
    result.errorflag = '0';
    result.value = a * b;

    if(a != 0 && result.value / a != b) {
        result.errorflag = '1';
    }

    
    return result;
}
struct SafeResult safedevide(int a, int b) {
    struct SafeResult result;
    result.errorflag = '0';
    if(b == 0) { 
        result.errorflag = '1';
     }

    else {
        result.value = a / b;

    }
    return result;
}
struct SafeResult safestrtoint(char a[]){
    struct SafeResult result;
    result.errorflag = '0';
    result.value = 0;
    int negative = 0;

    if(a[0] == '-') {
        negative = 1;
    }

    int i = 0;
    if(negative) i = 1;

    while (a[i] != '\0') {
        if(a[i] > '9' || a[i] < '0') {
            result.errorflag = '1';
            break;
        } else {
            struct SafeResult mult = safemultiply(result.value, 10);
            struct SafeResult add = safeadd(mult.value, a[i] - '0');

            if(mult.errorflag == '1' || add.errorflag == '1') {
                result.errorflag = '1';
                break;
            }

            result.value = add.value;
        }
        i++;
    }

    if(result.errorflag == '1') {
        printf("\nOverflow");
    }

    if(negative && result.errorflag == '0') {
        result.value *= -1;
    }

    return result;
}