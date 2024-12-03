void alocaMemoria(int **array, int size) {
    *array = (int *)malloc(size * sizeof(int));
    if (!array) {
        printf("Erro ao alocar memória.\n");
        exit(1);  
    }

    for (int i = 0; i < size; i++) {
        printf("Digite o próximo número: ");
        scanf("%d", &(*array)[i]);
    }
}
void mostraMultiplos(int *array, int size, int numero){
    int qtdMultiplos = 0;

    for(int i = 0; i<size; i++){
        if(array[i]%numero == 0) {
            printf("\nO numero %d eh multiplo de %d", array[i], numero);
            qtdMultiplos++;
        }
    }

    printf("\nO total de multiplos do numero %d nesse vetor eh de: %d", numero, qtdMultiplos);
}

int main() {
    int * array;
    int size;
    int numero = 0;

    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    alocaMemoria(&array,size);

    printf("Digite o numero que deseja encontrar: ");
    scanf("%d", &numero);

    mostraMultiplos(array, size, numero);

    free(array);
    return 0;
}
