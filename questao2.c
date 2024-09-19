int calculaConsumo (int km, int litros){
    return km/litros;
}

void consultaTabela(int consumo) {
    if(consumo < 8){
        return printf(" O consumo do seu carro eh: %d, Venda o carro!", consumo);
    } else if(consumo > 8 && consumo < 12) {
        return printf(" O consumo do seu carro eh: %d, Economico!", consumo);
    } else if(consumo > 12){
        return printf(" O consumo do seu carro eh: %d, Super economico!!", consumo);
    }
}
int main() {
    int km = 0, litros = 0;
    int consumo = 0;
    int esc = 0;

    do
    {

        printf("Digite os km: ");
        scanf("%d", &km);
    
        printf("Digite os litros: ");
        scanf("%d", &litros);

        consumo = calculaConsumo(km,litros);
        consultaTabela(consumo);

        printf("\nVoce deseja continuar? ");
        scanf("%d", &esc);
    } while (esc != 0);

    
   
}