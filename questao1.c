void DesenhaLinha(int qtd) {
    for(int i = 0; i < qtd; i++){
        printf("=");
    }
    return 0;
}

int Intervalo(int menor, int maior){
    int i, soma = 0;
    for(i = 0; menor < maior; i++){
        soma += 1;
    }

    return soma;
}

int main (){ }