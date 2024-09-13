#include <stdio.h>

int CalculaDias(int anoN, int anoA)
{
    int anosVividos = anoA - anoN;
    int test = anosVividos * 365;
    return test;
}

int CalculaBissexto(ano)
{
    if (ano % 4 == 0)
    {
        if (ano % 100 != 0){
            return 1;
        }else if (ano % 400 == 0)
        {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

int main()
{
    char nome[100] = {0};
    int anoN = 0, anoA = 0;
    int esc = 0;

    do
    {

        printf("Digite seu nome: ");
        scanf(" %s", &nome);

        printf("Digite seu ano de nascimento: ");
        scanf("%d", &anoN);

        printf("Digite o ano atual: ");
        scanf("%d", &anoA);

        printf("\nTotal de dias vividos: %d", CalculaDias(anoN, anoA));
        printf("Calcula bissexto %d", CalculaBissexto(anoN));

        printf("\nVoce deseja continuar? ");
        scanf("%d", &esc);
    } while (esc != 0);
}