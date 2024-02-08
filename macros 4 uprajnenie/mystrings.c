/*
Направете заглавен файл “mystrings.h”, който да декларира 3 функции, които да работят със символни низове. 
Първата функция (strlength) трябва да намира дължината на символен низ, втората (strconcat) да слива два символни
 низа в първия подаден като аргумент на функцията, третата функция (strcompare) трябва да сравнява лексикално два 
 символни низа (да връща -1 ако първия стринг се намира лексикално преди втория, 0 - ако двата символни низа за 
 еднакви и 1 ако първия символен низ се намира след втория). Пример за strlength: Вход: “Ivan” => Изход: 4. 
 Пример за strconcat: Вход: str1=Hello, str2=World => strconcat(str1, str2) => Изход: str1=HelloWorld, str2=World.
  Пример за strcompare: Вход: “Alex”, “Alan” => Изход: 1, вход: “Alex”, “Alex” => Изход: 0, вход “Alex”, “Boyan” 
  => Изход: -1. Направете сорс файл mystrings.c, който да вмъква заглавния файл “mystrings.h” и да дефинира 
  функциите (да ги имплементира). Добавете в Makefile-a от първа задача цел, която се казва mystrings.o която 
  да компилира модула до обектен файл. Променете clean целта така че да изчиства и обектните файлове.
*/
#include "mystrings.h"
#include <string.h>

int strlenght(char arr[]) {
    int counter = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        counter++;
    }
    return counter;
}

void strconcat(char arr1[], char arr2[]) {
    int arr_2_size = strlenght(arr2);
    int arr_1_size = strlenght(arr1);
    int j = 0;
    for(int i = arr_1_size; i < arr_1_size + arr_2_size; i++) {
        arr1[i] = arr2[j];
        j++;
    }
}

int strcompare(char arr1[], char arr2[]) {
    int i = 0;
    int j = 0;
    while (arr1[i] != '\0' && arr2[j] != '\0')
        if(arr1[i] > arr2[j])return -1;
        else if(arr1[i] < arr2[j]) return 1;
        else {
            i++;
            j++;
        }
    if(arr1[i] == '\0' && arr2[j] == '\0')return 0;
    else if(arr1[i] == '\0')return -1;
    else return 1;
    
}