/*
Направете макро функция, която да сортира масив от произволен тип, и да може да сортира низходящо или възходящо
 в зависимост от аргумент, подаден на макрото. Пример за дефиниция на подобно макро функция SORT(ARRAY, SIZE, TYPE, COMPARE).
  Пример за използване на подобна макро функция: SORT(array, 5, int, >). Хубаво е да се преизползва SWAP макро
   функцията от задача 5. Когато дефинирате макрото за да се чете по лесно кодът, можете да слагата “\” за да
    направите макрото на няколко реда..
*/

#include <stdio.h>

#define SWAP(A, B, TYPE) TYPE C; C = A; A = B; B = C;
#define n 5

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
for (int i = 0; i < SIZE - 2; i++) { \
    for (int j = i + 1; j < SIZE - 1; j++) { \
        if (ARRAY[i] COMPARE ARRAY[j]) { \
            SWAP(ARRAY[i], ARRAY[j], TYPE); \
        } \
    } \
} \


int main() {
    int array[n] = {5, 7, 3, 2, 1};
    SORT(array, n, int, <);
    for(int i = 0; i < n; i++) {
        printf("%d", array[i]);
    }
    return 0;
} 