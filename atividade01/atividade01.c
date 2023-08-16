#include <stdio.h>

int main() {
    char nome[30];
    int idade;
    char matricula[30];
    char endereco[50];
    char curso[20];
    char periodo[20];
    char disciplinas[60];

    printf("Fale o seu nome: ");
    scanf("%s", nome);

    printf("Fale sua idade: ");
    scanf("%d", &idade);  
    

    printf("Digite sua matricula: ");
    scanf("%s", matricula);

    printf("Digite seu endereco: ");
    scanf("%s", endereco);

    printf("Digite seu curso: ");
    scanf("%s", curso);

    printf("Digite qual seu periodo: ");
    scanf("%s", periodo);

    printf("Digite sua disciplina: ");
    scanf("%s", disciplinas);

    return 0;
}
