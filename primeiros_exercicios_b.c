int CalculaDias(int anoN, int anoA)
{
    int anosVividos = anoA - anoN;
    int diasVividos = anosVividos * 365;

    for(int i = anoN; i < anoA; i++){
        if(CalculaBissexto(i) == 1){
            printf("calcula dia ++ 1");
            diasVividos++;
        }
        printf("nao calcula");
    }

    return diasVividos;
}

int CalculaBissexto(ano)
{
    if (ano % 4 == 0 && ano % 100 != 0)
    {
            return 1;
        }else if (ano % 400 == 0)
        {
            return 1;
        } else {
            return 0;
        }
}

int main()
{
    char nome[100] = {0};
    int anoN = 0, anoA = 0, anoF = 0;
    int esc = 0;

    do
    {

        printf("Digite seu nome: ");
        scanf(" %s", &nome);

        printf("Digite seu ano de nascimento: ");
        scanf("%d", &anoN);

        printf("Digite o ano atual: ");
        scanf("%d", &anoA);

        printf("\n %s viveu o total de %d dias.", nome, CalculaDias(anoN, anoA));
        
        printf("\nDigite um ano futuro: ");
        scanf("%d", &anoF);

        printf("\n a quantidade de dias entre %d e %d eh de: %d", anoA, anoF, CalculaDias(anoA, anoF));

        printf("\nVoce deseja continuar? ");
        scanf("%d", &esc);
    } while (esc != 0);
}