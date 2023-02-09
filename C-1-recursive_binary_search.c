/* Binary search - Recursive Method*/

#include <stdio.h>

#define TAM 20

int binaria_recursiva(int vetor[], int valor, int inicio, int fim){
    int meio = (fim - (inicio / 2));

    if (valor == vetor[meio]){ return meio; }
    else if (valor < vetor[meio]){ return binaria_recursiva(vetor, valor, inicio, (meio - 1));}
    else if (valor > vetor[meio]){ return binaria_recursiva(vetor, valor, (meio + 1), fim);}
}

int main() {
    int valor, posicao;
    int vetor[TAM] = {1,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95};
    printf("Qual o numero voce quer procurar? ");
    scanf("%d", &valor);
    posicao = binaria_recursiva(vetor, valor, 0, (TAM - 1));
    if (posicao == -1)
        printf("Elemento não encontrado.\n");
    else
        printf("Elemento encontrado na posicao: %d do vetor\n", posicao);
    return 0;
}