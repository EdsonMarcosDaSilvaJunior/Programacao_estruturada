typedef struct {
    char nome[100];
    int matricula;
    float media; 
} Aluno;

void Situaçao(Aluno alunos[]){
    
}

int main(){
    Aluno alunos[10];

    do {
      for(int i = 0; i < 10; i++){
        printf("Digite o nome do aluno: ");
        scanf(" %s", &alunos[i].nome);

        printf("Digite a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite a media do aluno: ");
        scanf("%f", &alunos[i].media);
      }




    } while(1!=0);

}