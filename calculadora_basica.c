#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    int num1;
    int num2;
    int soma, produto, modulo;

    num1 = 10;
    num2 = 3;

    soma = num1 + num2;

    produto = num1 * num2;

    modulo = num1 % num2;

    printf("A soma é %d\n", soma);
    printf("O produto é %d\n", produto);
    printf("O resto da divisão é %d\n", modulo);

    return 0;
}