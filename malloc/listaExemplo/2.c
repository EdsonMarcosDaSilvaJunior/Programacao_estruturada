int main() {
    float valorInicial=0;
    float juros = 0;
    int i, totalMeses = 0;
    float * meses = 0;


    printf("\n Informe o valor Inicial: ");
    scanf("%d", &valorInicial);

    printf("\n Informe o total de meses: ");
    scanf("%d", &totalMeses);
    
    printf("\n Informe o percentual de juros: ");
    scanf("%d", &juros);

    
    meses = (float *) malloc (sizeof(float) * totalMeses);
    
    juros = (juros/100) +1;
    meses[0] = valorInicial;

    for(i = 1; i< totalMeses; i++) {
        meses[i] = (meses[1-i] * juros);
    }



    for (i = 0; i < totalMeses; i++)
    {
        printf("\n mes %d : valor = %.2f ", i+1, meses[i]);
    }
    free(meses);
    
    return 0;
}