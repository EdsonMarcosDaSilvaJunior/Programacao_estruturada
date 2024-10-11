typedef struct 
{
    int matricula, nota1, nota2, nota3;
    char nome[100];
} Aluno;

void EncontraMaiorNotaProva1(Aluno alunos[], int qtdAlunos){
    int maiorNota = -999;
    Aluno alunoMaiorNota;
    for(int i = 0; i < qtdAlunos; i++){
        if(alunos[i].nota1 > maiorNota){
            maiorNota = alunos[i].nota1;
            alunoMaiorNota = alunos[i];
        }
    }

    printf("\nO aluno com a maior nota eh: %s com a nota: %d", alunoMaiorNota.nome, alunoMaiorNota.nota1);
}

void MaiorMedia(Aluno alunos[], int qtdAlunos){
    int maiorMedia = -999;
    Aluno alunoMaiorMedia;

    for(int i = 0; i < qtdAlunos; i++){
        int media = alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 / 3;
        if(media > maiorMedia){
            maiorMedia = media;
            alunoMaiorMedia = alunos[i];
        }
    }
    
    printf("\nO aluno com a maior media eh: %s com a media: %2.d", alunoMaiorMedia.nome, alunoMaiorMedia.nota1 + alunoMaiorMedia.nota2 + alunoMaiorMedia.nota3 / 3);
}

void MenorMedia(Aluno alunos[], int qtdAlunos){
    int maiorMedia = 999;
    Aluno alunoMenorMedia;

    for(int i = 0; i < qtdAlunos; i++){
        int media = alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 / 3;
        if(media < maiorMedia){
            maiorMedia = media;
            alunoMenorMedia = alunos[i];
        }
    }
    
    printf("\nO aluno com a menor media eh: %s com a media: %2.d", alunoMenorMedia.nome, alunoMenorMedia.nota1 + alunoMenorMedia.nota2 + alunoMaiorMedia.nota3 / 3);
}

void aprovado(Aluno alunos[], int qtdAlunos){
    for(int i = 0; i < qtdAlunos; i++){
        int media = alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 / 3;
        if(media > 6){
           printf("Aprovado!!");
        } else {
            printf("Reprovado!!");
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
            scanf(" %d", &alunos[i].nota1);
            printf("Digite nota segunda Prova: ");
            scanf(" %d", &alunos[i].nota2);
            printf("Digite nota terceira Prova: ");
            scanf(" %d", &alunos[i].nota3);

            printf("\nAluno %d cadastrado!!\n", i+1);
        }

        EncontraMaiorNotaProva1(alunos, qtdAlunos);
        MaiorMedia(alunos, qtdAlunos);
        MenorMedia(alunos, qtdAlunos);


    } while(1!=0);

}