#include <stdio.h>
#include "load_lib.h"
#include "func_prot.h"
#include <windows.h>

void LoadRun(const char * const s)
{
    void *lib;
    void (*fun)(void);

    lib = LoadLibrary(s); //загрузка библиотеки в память;

    if (!lib)
    {
        printf("Can not open library '%s'\n", s);
        return;
    }

    fun = (void (*)(void))GetProcAddress((HINSTANCE)lib, "func"); //получение указателя на функцию из библиотеки;

    if (fun == NULL)
    {
        printf("Can not load function func\n");
    }
    else
    {
        fun();
    }

    FreeLibrary((HINSTANCE)lib); //выгрузка библиотеки;}

}
