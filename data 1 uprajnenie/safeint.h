#ifndef _SAFEINT_H
#define _SAFEINT_H

struct  SafeResult
{
    int value;
    char errorflag;
};

struct SafeResult safeadd(int a, int b);
struct SafeResult safesubstract(int a, int b);
struct SafeResult safemultiply(int a, int b);
struct SafeResult safedevide(int a, int b);
struct SafeResult safestrtoint(char a[]);


#endif