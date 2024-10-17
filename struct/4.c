typedef struct 
{
    int matricula;
    float nota1, nota2, nota3;
    char nome[100];
} Aluno;

void EncontraMaiorNotaProva1(Aluno alunos[], int qtdAlunos){
    float maiorNota = -999;
    Aluno alunoMaiorNota;
    for(int i = 0; i < qtdAlunos; i++){
        if(alunos[i].nota1 > maiorNota){
            maiorNota = alunos[i].nota1;
            alunoMaiorNota = alunos[i];
        }
    }

    printf("\nO aluno com a maior nota eh: %s com a nota: %.2f.\n", alunoMaiorNota.nome, alunoMaiorNota.nota1);
}

void MaiorMedia(Aluno alunos[], int qtdAlunos){
    float maiorMedia = -999;
    Aluno alunoMaiorMedia;

    for(int i = 0; i < qtdAlunos; i++){
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if(media > maiorMedia){
            maiorMedia = media;
            alunoMaiorMedia = alunos[i];
        }
    }
    
    printf("\nO aluno com a maior media eh: %s com a media: %.2f.\n", alunoMaiorMedia.nome, (alunoMaiorMedia.nota1 + alunoMaiorMedia.nota2 + alunoMaiorMedia.nota3) / 3);
}

void MenorMedia(Aluno alunos[], int qtdAlunos){
    float maiorMedia = 999;
    Aluno alunoMenorMedia;

    for(int i = 0; i < qtdAlunos; i++){
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if(media < maiorMedia){
            maiorMedia = media;
            alunoMenorMedia = alunos[i];
        }
    }
    
    printf("\nO aluno com a menor media eh: %s com a media: %.2f\n", alunoMenorMedia.nome, (alunoMenorMedia.nota1 + alunoMenorMedia.nota2 + alunoMenorMedia.nota3) / 3);
}

void Aprovado(Aluno alunos[], int qtdAlunos){
    for(int i = 0; i < qtdAlunos; i++){
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if(media > 6){
           printf("\nAluno: %s. Matricula: %d. Aprovado!!\n", alunos[i].nome, alunos[i].matricula);
        } else {
            printf("\nAluno: %s. Matricula: %d. Reprovado!!\n", alunos[i].nome, alunos[i].matricula);
        }
    }
}

int main(){
    Aluno alunos[5];
    int qtdAlunos = 0;

    printf("\nQuantos alunos sao? ");
    scanf("%d", &qtdAlunos);
    do {
        for(int i = 0; i < qtdAlunos; i++){
            printf("Digite seu nome: ");
            scanf(" %s", &alunos[i].nome);
            printf("Digite sua matricula: ");
            scanf("%d", &alunos[i].matricula);
            printf("Digite nota primeira Prova: ");
            scanf("%f", &alunos[i].nota1);
            printf("Digite nota segunda Prova: ");
            scanf("%f", &alunos[i].nota2);
            printf("Digite nota terceira Prova: ");
            scanf("%f", &alunos[i].nota3);

            printf("\nAluno %d cadastrado!!\n", i+1);
        }

        EncontraMaiorNotaProva1(alunos, qtdAlunos);
        MaiorMedia(alunos, qtdAlunos);
        MenorMedia(alunos, qtdAlunos);
        Aprovado(alunos, qtdAlunos);


    } while(1!=0);

}