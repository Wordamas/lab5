#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "load_lib.h"
#include "func_prot.h"

int main(void)

{
    setlocale(LC_ALL, "Rus");
    int a = 0, b = 1;

    puts("--------------------------------");
    puts("|1.| Библиотека с массивом. |");
    puts("|2.| Библиотека с матрицей. |");
    puts("|3.| Выход. |");
    puts("--------------------------------");
    printf("Введите номер нужного пункта: ");

    while (b)
    {
        scanf("%d", &a);
        if (a == 1)
            LoadRun("funcArray.dll");

//funcA();

        if (a == 2)
            LoadRun("funcMatrix.dll");

//funcM();

        if (a == 3)
            b = 0;

        else
            printf("\nВведите число в диапазоне от 1 до 3: ");
    }

    return 0;

}
