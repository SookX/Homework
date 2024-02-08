/*
Направете макро функция (SWAP(А, B, TYPE)), което да разменя стойностите на две променливи от произволен тип.
 Помощ: въведете типа като допълнителен аргумент на макро функцията. Демонстрирайте използването на подобно макро.
  Когато дефинирате макрото за да се чете по лесно кодът, можете да слагата “\” за да направите макрото на няколко 
  реда.
*/
#include <stdio.h>
#define SWAP(A, B, TYPE) TYPE C; C = A; A = B; B = C;

int main() {
    int a = 5;
    int b = 7;
    SWAP(a, b, int);
    printf("%d", b);
    printf("%d", a);
}