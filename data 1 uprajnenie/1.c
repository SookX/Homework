#include <stdio.h>
#include <limits.h>

int main() {
    printf("+------------+--------+--------+----------------------+-----------------------+---------+-----------------------+\n");
    printf("| Type       | Format | Bytes  | Signed Max           | Signed Min            | Unsigned| Unsigned Max          |\n");
    printf("+------------+--------+--------+----------------------+-----------------------+---------+-----------------------+\n");

    printf("| char       | %%c     | %2lu     | %20d | %21d | %%hhu    | %21u |\n", sizeof(char), CHAR_MAX, CHAR_MIN, UCHAR_MAX);
    printf("| short      | %%hd    | %2lu     | %20d | %21d | %%hu     | %21u |\n", sizeof(short), SHRT_MAX, SHRT_MIN, USHRT_MAX);
    printf("| int        | %%d     | %2lu     | %20d | %21d | %%u      | %21u |\n", sizeof(int), INT_MAX, INT_MIN, UINT_MAX);
    printf("| long       | %%ld    | %2lu     | %20ld | %21ld | %%lu     | %21lu |\n", sizeof(long), LONG_MAX, LONG_MIN, ULONG_MAX);
    printf("| long long  | %%lld   | %2lu     | %20lld | %21lld | %%llu    | %21llu |\n", sizeof(long long), LLONG_MAX, LLONG_MIN, ULLONG_MAX);

    printf("+------------+--------+--------+----------------------+-----------------------+---------+-----------------------+\n");

    return 0;
}
