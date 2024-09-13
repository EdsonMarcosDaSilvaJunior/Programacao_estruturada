#include <stdio.h>

int CalculaDias(int anoN, int anoA)
{
    int anosVividos = anoA - anoN;
    int test = anosVividos * 365;
    return test;
}

int main()
{
    char nome[100] = {0};
    int anoN = 0, anoA = 0;
    int esc = 0;

    printf("Digite seu nome: ");
    scanf(" %s", &nome);

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoN);

    printf("Digite o ano atual: ");
    scanf("%d", &anoA);

    printf("\nTotal de dias vividos: %d", CalculaDias(anoN, anoA));

    printf("\nVoce deseja continuar? ");
    scanf("%d", &esc);
}
