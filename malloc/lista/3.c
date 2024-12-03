void LerValoresUsuario(int * array, int size){
    for(int i = 0; i < size; i++) {
        printf("Digite o proximo numero: ");
        scanf("%d", &array[i]);
    }
}

int main() {
    int * array;
    int size;
    int pares = 0, impares = 0; 

    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    array = (int *) malloc (size * sizeof(int));

    if (!array) {
        printf("Erro ao alocar memória.\n");
        return 1;  
    }

    LerValoresUsuario(array,size);

    for(int i = 0; i < size; i++) {
        if(array[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nNumero de pares: %d", pares);
    printf("\nNumero de impares: %d", impares);

    free(array);
    return 0;
}