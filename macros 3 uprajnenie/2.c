/*
Направете програма, която да намира най-малко общо кратно на две числа. Пример: a=12, б=18, най-малко общо 
кратно = 36. Изпълнете първите две стъпки от процеса на компилация на тази програма и качете асембли кода заедно
 със задачата към заданието.
*/


#include <stdio.h>

int obshto_kratno(a, b) {
    int i = 2;
    while (1)
    {
        if((a * i) % b == 0)return a * i;
        i++;
    }
    return 0;
    
}

int main () {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int kratno = obshto_kratno(a, b);
    printf("%d", kratno);
    return 0;
    

}