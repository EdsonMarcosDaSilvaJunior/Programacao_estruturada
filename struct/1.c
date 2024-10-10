typedef struct {
    int hora, minutos, segundos;
} Horario;

typedef struct{
    int dia,mes,ano;
} Data;

typedef struct{
    Horario horario;
    Data data;
    char descricao[100];
} Compromisso;

void ImprimeCompromisso(Compromisso compromisso){
    printf("Data - %d/%d/%d\nHorario - %d:%d:%d\nDescricao: %s\n",compromisso.data.dia,compromisso.data.mes,compromisso.data.ano,compromisso.horario.hora,compromisso.horario.minutos,compromisso.horario.segundos, compromisso.descricao);
}

int main() {
    Compromisso compromisso = {{18,30,00}, {10,10,2024}, "comeco_aula!"};
    
    int alterar = 99;

    do{
    ImprimeCompromisso(compromisso);

    printf("deseja alterar o seu compromisso? (1 = sim, 0 = nao)");
    scanf("%d", &alterar);

    printf("Digite o horario do seu compromisso(hora): ");
    scanf("%d", &compromisso.horario.hora);
    
    printf("Digite o horario do seu compromisso(minutos): ");
    scanf("%d", &compromisso.horario.minutos);

    printf("Digite o horario do seu compromisso(segundos): ");
    scanf("%d", &compromisso.horario.segundos);
    
    printf("\nHorario alterado!!\n");

    printf("Digite a data do seu compromisso(dia): ");
    scanf("%d", &compromisso.data.dia);

    printf("Digite a data do seu compromisso(mes): ");
    scanf("%d", &compromisso.data.mes);

    printf("Digite a data do seu compromisso(ano): ");
    scanf("%d", &compromisso.data.ano);
    
    printf("\nData alterada!!\n");
    
    printf("Digite a descricao do seu compromisso (Separe por UNDERLINE): ");
    scanf(" %s", &compromisso.descricao);

    printf("\nDescricao alterado!!\n");

    } while (alterar = 0);
}