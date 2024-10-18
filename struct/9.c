typedef struct {
    char nome[100];
    int matricula;
    float media; 
} Aluno;

void Situacao(Aluno alunos[]){
    Aluno alunosAprovados[10];
    Aluno alunosReprovados[10];

    int aprovado = 0;
    int reprovado = 0;
    for(int i = 0; i < 3; i++){
        if(alunos[i].media > 5.0){
            alunosAprovados[aprovado] = alunos[i];
            aprovado++;
        } else {
            alunosReprovados[reprovado] = alunos[i];
            reprovado++;
        }
    }

        printf("\nAlunos Aprovados: \n");
        for(int i = 0; i < aprovado; i++){
            printf("\nNome: %s, Matricula: %d, Media: %.2f\n", alunosAprovados[i].nome, alunosAprovados[i].matricula, alunosAprovados[i].media);
        }

        printf("\nAlunos Reprovados: \n");
        for(int i = 0; i < reprovado; i++){
            printf("\nNome: %s, Matricula: %d, Media: %.2f\n", alunosReprovados[i].nome, alunosReprovados[i].matricula, alunosReprovados[i].media);
        }
};

int main(){
    Aluno alunos[3];

    do {
      for(int i = 0; i < 3; i++){
        printf("Digite o nome do aluno: ");
        scanf(" %s", &alunos[i].nome);

        printf("Digite a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite a media do aluno: ");
        scanf("%f", &alunos[i].media);
      }

      Situacao(alunos);


    } while(1!=0);

}