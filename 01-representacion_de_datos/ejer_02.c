//    Escribir un programa en C que, utilizando *printf* y *scanf*, resuelva el
//    ejercicio anterior.

//    > Hint: El siguiente código describe un programa que toma el número decimal
//    > ingresado por el usuario y lo imprime en la misma representación.
#include <stdio.h>

int main(void)
{
    unsigned int entered_number;

    printf("Enter a number in decimal: ");
    scanf("%u", &entered_number);
    printf("Decimal: %d\n", entered_number);

    return 0;
}
// googlear como make a cierta carpeta