int main() {
    int * array;
    int tamanhoArray;
    int i;

    printf("Digite o tamanho do seu array: ");
    scanf("%d", &tamanhoArray);
    array = (int *) malloc (tamanhoArray * sizeof(int));

    for (i = 0; i < tamanhoArray; i++) {
        printf("digite um numero: ");
        scanf("%d", &array[i]);
    }

    printf("Os numeros digitados foram:\n");
    for (i = 0; i < tamanhoArray; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}