void DesenhaLinha(int qtd) {
    for(int i = 0; i < qtd; i++){
        printf("=");
    }
    return 0;
}

int Intervalo(int menor, int maior){
    int i, soma = 0;
    for(i = menor; i <= maior; i++){
        soma += i;
    }

    return soma;
}

int main (){
    int menor, maior = 0;
    int linha, esc = 0;

    printf("Tamanho da linha: ");
    scanf("%d", &linha);

    do{
        printf("Digite o menor numero: ");
        scanf("%d", &menor);
        printf("Digite o maior numero: ");
        scanf("%d", &maior);
        DesenhaLinha(linha);

        Intervalo(menor, maior);

        printf("\nA soma dos intervalos eh: %d", Intervalo(menor, maior));
        printf("\nVoce deseja continuar? ");
        scanf("%d", &esc);
    } while (esc != 0);
 }