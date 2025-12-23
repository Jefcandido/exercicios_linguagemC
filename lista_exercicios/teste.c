/*
    Versão 1 - Simplicicada
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    char letra_produto;
    unsigned int quantidade;
    float preco;
    double valor_total;

    //Captura da letra do produto
    printf("Qual é a letra do produto ?\n");
    scanf(" %c", &letra_produto);

    //Captura da quantidade de produto em estoque
    printf("Quantos protudos tem em estoque ?\n");
    scanf(" %d", &quantidade);

    //Captura do preço/valor do produto (R$)
    printf("Qual é valor deste produto em reais ?\n");
    scanf(" %f", &preco);

    //Calculo do valor total em reais dos produtos em estoque
    valor_total = preco * quantidade;

    //Conclusão / Exibição dos dados
    printf("-- Ficha do produto --\n");
    printf("Letra do produto: %c\n", letra_produto);
    printf("Quantidade: %d\n", quantidade);
    printf("Preço: %.2f\n", preco);
    printf("Valor total de mercadoria: %.2f\n", valor_total);

    //Verificação de espaço na memória (Teste)
    printf("\nCuriosidade: O tipo int ocupa %d bytes nesta maquina.\n", sizeof(int));

    return 0;
}