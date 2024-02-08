/*
Направете програма, която да управлява осветлението на умна къща, която има осем стаи. Състоянието на стаите трябва да
 се запазва в 8 битова променлива, където всеки бит индикира състоянието на всяка стая. Например ако бит 0 е вдигнат 
 (тоест има стойност 1), това означава че осветлението е запалено в стая 1. Приложението трябва да предоставя меню с две
  опции. Първата опция (“Switch lights”) трябва да приема номер на стая от конзолата (число от 1 до 8) и да включва
   осветлението в дадена стая ако, то е изключено или да го изключи ако е включено. Помислете каква побитова операция 
   трябва да използвата за да осъществите тази функционалност. Втората опция (“Print state”), трябва да принтира, в кои
    стаи осветлението е включено. Пример за резултат от опция две е “The light is on in rooms: 1 2 7”, което означава 
    че осветлението е запалено в стаи 1, 2 и 7.
*/

#include <stdio.h>

int main() {

unsigned int lights = 0; // 0000 0000

unsigned int light1 = 1 << 0; // 0000 0001
unsigned int light2 = 1 << 1; // 0000 0010
unsigned int light3 = 1 << 2; // 0000 0100
unsigned int light4 = 1 << 3; // 0000 1000
unsigned int light5 = 1 << 4; // 0001 0000
unsigned int light6 = 1 << 5; // 0010 0000
unsigned int light7 = 1 << 6; // 0100 0000
unsigned int light8 = 1 << 7; // 1000 0000

int state;
printf("\n Welcome to your smart house app!");
while (1)
    {
        printf("\nEnter one of the options: ");
        printf("\n(1) Swtich lights");
        printf("\n(2) Print state");
        printf("\n(Something else) Exit");
        printf("\n Enter your option: ");
        scanf("%d", &state);
        if(state == 1) {
            int number;
            printf("Enter the light number: ");
            scanf("%d", &number);
            // 0001 0000
                // OR
            // 0010 0000

            // 0011 0000

            // 0001 0000
        }

    }

}