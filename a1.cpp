// a1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <string>

const std::string v = "aum";

bool carValido(char x) {
    for (unsigned int i = 0; i < v.size(); i++) {
        if (x == v[i]) {
            return true;
        }
    }
    return false;
}

char leeEntrada() {
    char x;
    std::cin >> x;
    while (!carValido(x)) {
        wprintf(L"Intente de nuevo\n");
        std::cin >> x;
    }
    return x;
}

void arrancarPrograma() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    wprintf(L"L2 es una herramienta sencilla para mantener un registro de tus libros, citas y lecturas.\n\n");
    wprintf(L"\x00bfQu\x00e9 deseas hacer?\n");
    wprintf(L"a - Agregar un libro a tu lista de libros.\nu - Agregar un autor a tu base de datos.\n");
    char x = leeEntrada();
    wprintf(L"Ingresa ");
    wprintf(L"%lc", x);
}

int main()
{
    arrancarPrograma();
}