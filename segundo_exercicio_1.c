int calculaPotencia(int base, int expoente){
    int resultado = base;
    if (expoente == 0){
        return 1;
    }
    for(int i = 1; i < expoente; i++){
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base = 0, expoente = 0;
    int esc = 0;

    do
    {
    printf("Digite um numero para a base: ");
    scanf("%d", &base);
    
    printf("Digite um numero para o expoente: ");
    scanf("%d", &expoente);

    printf("potencia e %d", calculaPotencia(base, expoente));
       
        printf("\nVoce deseja continuar? ");
        scanf("%d", &esc);
    } while (esc != 0);
}