/*
Дефинирайте макро, което се казва DEBUG. Направете, функция която да сортира 
масив и да намира сумата на елементите, които се намират на индекси, които се делят с 
точност на 3. Направете функцията така, че ако DEBUG макрото е дефинирано, на екрана да се 
принтира сортирания масив и елементите, които се намират на индекси, които се делят с точност на 3.
*/
#include <stdio.h>

#define n 5
#define DEBUG

void sort(int array[], int indexes) {
    int sum = 0;
    for(int i = 0; i < indexes - 1; i++) {
        for(int j = i + 1; j < indexes; j++) {
            if(array[i] > array[j]) {
                int temp;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(i % 3 == 0) {
            sum += array[i];
        }
    }
    #if defined DEBUG
    for(int i = 0; i <n; i++) {
        printf("%d\n", array[i]);
    }
    for(int i = 0; i < n; i++) {
        if(i % 3 == 0) {
            printf("\n%d is on index of 3", array[i]);
        }
    }
    #endif
    printf("\nThe sum is %d", sum);
    
}
int main() {

    int array[n] = {7, 6, 5, 4, 21};
    sort(array, n);


    return 0;
}