#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    int a = 0, b = 0;

    int r = scanf("%d %d", &a, &b);

    printf("Retorno = %d\n", r);
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}