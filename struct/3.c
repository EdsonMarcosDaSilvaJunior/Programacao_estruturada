typedef struct{
    char nome[100];
    int matricula;
    char curso[100];
} Aluno;

void Imprime(Aluno alunos[], int qtdAlunos){
    printf("Os alunos sao: ");
        for(int i = 0; i < qtdAlunos; i++){
            printf("\nAluno %d: \n Nome: %s\n Matricula: %d\n Curso: %s\n", i,alunos[i].nome, alunos[i].matricula, alunos[i].curso);
        }
};
int main() {
    Aluno alunos[5];
    int qtdAlunos = 0;

    printf("\nQuantos alunos sao? ");
    scanf("%d", &qtdAlunos);
    do {
        for(int i = 0; i < qtdAlunos; i++){
            printf("Digite seu nome: ");
            scanf(" %s", &alunos[i].nome);
            
            printf("Digite seu matricula: ");
            scanf(" %d", &alunos[i].matricula);
            
            printf("Digite seu curso: ");
            scanf(" %s", &alunos[i].curso);

            printf("\nAluno %d cadastrado!!\n", i+1);
        }

        Imprime(alunos, qtdAlunos);


    } while(1!=0);
}