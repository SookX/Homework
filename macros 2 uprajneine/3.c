/*
Направете функция, която използва различен алгоритъм за сортиране в зависимост от операционната система, на
 която се намира. Ако операционната система е windows да се използва метод на мехурчето. Ако системата е linux
  да използва метод на пряката селекция. Ако операционната система е MacOS да се използва метода на прякото 
  вмъкване. Ако операционната система не е нито една от трите, функцията да обръща масива (първият му елемент,
   да стане последен, втория предпоследен и т.н).
*/

#include <stdio.h>

#define ARRAY_SIZE 5


void sorting(int array[], int n){
    #ifdef _WIN32
    printf("This is on Windows");
    for (int i = 0; i < n - 1; i++) {
        int checked = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                checked = 1;
            }
        }
        if (checked == 0) {
            break;
        }
    }

    for(int i = 0; i <n ;i++) {
        printf("\n%d", array[i]);
    }

    #elif defined __APPLE__
	for(int i=1; i < n; i++)
	{
		int index = array[i];
		int dec = i;
		while(dec>0 && array[dec-1]>=index)
		{
			array[dec]=array[dec-1];
			dec--;
		}
		array[dec]=index;
	}
    for(int i = 0; i <n ;i++) {
        printf("\n%d", array[i]);
    }
    



    #else
    printf("You are on Elephant OS");

    int k = n - 1;
    int i = 0;
    while (i < n / 2 )
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
    #endif
}
int main() {
    
    int array[ARRAY_SIZE] = {4, 7, 1, 2, 6};
    sorting(array, ARRAY_SIZE);
    return 0;
}