#include <stdio.h>
#define n 6
int main() {
    
    int array[n] = {3, 5, 6, 1, 5, 7};
    //
    int k = n - 1;
    int i = 0;
    printf("%d", (n) / 2 );
    while (i < (n) / 2 )
    {
        int temp;
        temp = array[i];
        array[i] = array[k];
        array[k] = temp;
        i++;
        k--;


    }
    for(int i = 0; i < n; i++) {
        printf("\n%d", array[i]);
    }
    return 0;

}