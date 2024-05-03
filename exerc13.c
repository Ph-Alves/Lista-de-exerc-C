#include <stdio.h>
#include <string.h>

#define MAX_AGENDA_SIZE 5
#define MAX_NOME_SIZE 50
#define MAX_TELEFONE_SIZE 15

typedef struct {
    char nome[MAX_NOME_SIZE];
    char telefone[MAX_TELEFONE_SIZE];
}Pessoa;

typedef struct {
    Pessoa pessoas[MAX_AGENDA_SIZE];
    int numPessoas;
}Agenda;

void preencherAgenda(Agenda *agenda) {
    printf("Preencha os dados das pessoas:\n");
    for (int i = 0; i < MAX_AGENDA_SIZE; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        gets(agenda->pessoas[i].nome);
        printf("Telefone: ");
        gets(agenda->pessoas[i].telefone);
    }
    agenda->numPessoas = MAX_AGENDA_SIZE;
    return;
}

void procurarTelefone(Agenda agenda, char nome[]) {
    int encontrado = 0;
    for (int i = 0; i < agenda.numPessoas; i++) {
        if (strcmp(agenda.pessoas[i].nome, nome) == 0) {
            printf("Telefone de %s: %s\n", nome, agenda.pessoas[i].telefone);
            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0) {
        printf("Pessoa não encontrada na agenda.\n");
    }
    return;
}

int main() {
    Agenda minhaAgenda;

    preencherAgenda(&minhaAgenda);

    char nomeProcurado[MAX_NOME_SIZE];
    printf("\nDigite o nome da pessoa para buscar o telefone: ");
    scanf("%s", nomeProcurado);
    procurarTelefone(minhaAgenda, nomeProcurado);

    return 0;
}