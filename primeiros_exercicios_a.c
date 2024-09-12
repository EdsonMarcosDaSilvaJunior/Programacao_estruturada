int main() {
    int numeros [10], i = 0, maior = -999, posMaior = 0, menor = 999, posMenor = 0;
    int esc = 0;
   
    
    

    do{
         for(i = 0; i < 10; i++){
        printf("Digite o %d numero do vetor: ", i+1);
        scanf("%d", &numeros[i]);
    }
    


    printf("Seu vetor eh: ");
    for(i = 0; i < 10; i++){
        printf("%d", numeros[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++){
        if(numeros[i] > maior) {
            maior = numeros[i];
            posMaior = i;
        }
        if(numeros[i] < menor){
            menor = numeros[i];
            posMenor = i;
        }
    }

    printf("\nO maior numero eh: %d, posicao: %d", maior, posMaior);
    printf("\nO menor numero eh: %d, posicao: %d", menor, posMenor);
        printf("\nVoce deseja continuar? ");
        scanf("%d", &esc);
    } while (esc != 0);

    return 0;
}