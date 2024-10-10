typedef struct{
    char nome[100];
    int idade;
    char endereco[100];
} Pessoa;

void Imprimir(Pessoa pessoa) {
    printf("Nome: %s\nIdade: %d anos\nEndereco: %s\n", pessoa.nome, pessoa.idade, pessoa.endereco);
}
int main(){
    Pessoa pessoa;

    do {
        printf("Digite seu nome: ");
        scanf(" %s", &pessoa.nome);

        printf("Digite sua idade: ");
        scanf("%d", &pessoa.idade);

        printf("Digite seu endereco: ");
        scanf(" %s", &pessoa.endereco);

        Imprimir(pessoa);
    } while(1 != 0);
}
