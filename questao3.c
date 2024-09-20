int calculaRetangulo(int largura, int altura){
    int area = 0;
    area = largura * altura;
    return area;
}

int calculaTriangulo(int base, int altura){
    int area = 0;
    area = (base*altura)/2;
    return area;
}

float calculaCiculo(float raio){
    float area = 0;
    area = 3.14*(raio*raio);
    return area;
}

void imprime(char* texto, int resultado){
    printf("\n%s : %d", texto,resultado);
}

int Medidas(char* texto){
    int medida;

    printf("%s", texto);
    scanf("%d", &medida);
}

int main(){
    int resultado = 0, lado1 = 0,lado2 = 0, opc = 0;
    int escolha = 10;
    int area = 0;
    int largura = 0;
    int altura = 0;
    int base = 0;
    float raio = 0;
    do
    {
        printf("\nEscolha uma figura para calcular a area:\n");
        printf("\n1. Retangulo\n");
        printf("\n2. Triangulo\n");
        printf("\n3. Circulo\n");
        printf("\n0. Sair\n");
        printf("\nDigite sua escolha: ");
        scanf("%d", &escolha);
        
        switch (escolha)
        {
        case 1:
            largura = Medidas("\nInforme a largura: ");
            altura = Medidas("\nInforme a altura: ");
            area = calculaRetangulo(largura, altura);
            printf("\nA area do retangulo eh: %d\n", area);
            break;

        case 2:
            base = Medidas("\nInforme a base: ");
            altura = Medidas("\nInforme a altura: ");
            area = calculaTriangulo(base,altura);
            printf("\nA area do triangulo eh: %d\n", area);
            break;
        
        case 3:
            raio = Medidas("\nInforme o raio: ");
            float areaRaio = calculaCiculo(raio);
            printf("\nA area do circulo eh: %.2f\n", areaRaio);
            break;
        
        case 0:
            break;
        default:
            printf("Escolha invalida, digite novamente");
            break;
        }

    } while (escolha != 0);
}