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
    puts("|1.| ���������� � ��������. |");
    puts("|2.| ���������� � ��������. |");
    puts("|3.| �����. |");
    puts("--------------------------------");
    printf("������� ����� ������� ������: ");

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
            printf("\n������� ����� � ��������� �� 1 �� 3: ");
    }

    return 0;

}
