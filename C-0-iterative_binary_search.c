/*Binary Search - Iterative Method*/
#include <stdio.h>

#define TAM 20

int binaria_iterativa(int vetor[], int valor) {
    int inicio = 0;
    int fim = TAM - 1;
    int meio;
    while (inicio <= fim) {
        meio = (inicio + fim)/2;
        printf("%d - %d\n", meio, vetor[meio]);
        if (valor == vetor[meio])
            return meio;
        else if (valor > vetor[meio])
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

int main() {
    int valor, posicao;
    int vetor[TAM] = {1,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95};
    printf("Qual o numero voce quer procurar? ");
    scanf("%d", &valor);
    posicao = binaria_iterativa(vetor, valor);
    if (posicao == -1)
        printf("Elemento não encontrado.\n");
    else
        printf("Elemento encontrado na posicao: %d do vetor\n", posicao);
    return 0;
}