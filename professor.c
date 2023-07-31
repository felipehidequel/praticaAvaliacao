//Felipe Hidequel pratica prova de estrutura

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct professor{
    char nome[21];
    int disciplinas;
    int horasTrabalhadas;
}Professor;

void preenche(Professor *p){
    printf("Nome: ");
    scanf(" %[^\n]", p->nome); // preenche nome
    printf("Quantas discipĺinas o professor ministra? ");
    scanf("%d", &p->disciplinas);
    printf("Regime de trabalho: ");
    scanf(" %d", &p->horasTrabalhadas); // horas de trabalho
}

void imprime(Professor *p){
    printf("Nome: %s \t Disciplinas: %d \t Regime de trabalho: %d horas\n", p->nome, p->disciplinas,  p->horasTrabalhadas);
}

void newHoras(Professor *p){
    printf("Informe o novo regime de trabalho: ");
    scanf("%d", &p->horasTrabalhadas);
}

int main(){
    Professor *p;
    p = (Professor*) malloc (sizeof(Professor));
    if(p==NULL){exit(1);}

    preenche(p);
    imprime(p);
    newHoras(p);
    imprime(p);

    free(p);

    return 0;
}