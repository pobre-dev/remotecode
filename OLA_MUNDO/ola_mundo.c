#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale (LC_ALL, "");

    puts ("Olá, mundo!");

    return 0;
}
