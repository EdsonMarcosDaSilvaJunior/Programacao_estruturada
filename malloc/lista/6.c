void alocaMemoria(int **array, int size)
{
    *array = (int *) calloc (size * sizeof(int));
    if (!array)
    {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
}
void inserirValor(int *array)
{
    int posicao = 0, valor = 0;
    printf("Digite a posicao em que voce vai alterar: ");
    scanf("%d", &posicao);

    printf("Digite o valor para alterar: ");
    scanf("%d", &valor);

    array[posicao] = valor;
}

void consultarValor(int *array)
{
    int posicao = 0;
    printf("Digite a posicao que deseja consultar: ");
    scanf("%d", &posicao);

    printf("O conteudo da posicao eh: %d", array[posicao]);
}

void consultarTudo(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        printf("O valor #%d eh: %d ",i + 1, array[i]);
    }
}

int main()
{
    int *array;
    int size;
    int escolha;
    printf("Digite o tamanho da memoria: ");
    scanf("%d", &size);

    alocaMemoria(&array, size);

    printf("Digite 1 para inserir um valor na memoria ou 2 para consultar um valor na memoria: ");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        inserirValor(array);
        break;

    case 2:
        consultarValor(array);
        break;
    case 3:
        consultarTudo(array, size);
        break;
    default:
        printf("Escolha invalida, digite novamente!!");
        break;
    }

    free(array);
    return 0;
}
