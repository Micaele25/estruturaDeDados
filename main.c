#include <stdio.h>

void travessiaVetor(int vetor[], int tam_AtualVetor) {
    for (int i = 0; i < tam_AtualVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n"); 
}

void buscaElemento(int vetor[], int tam_AtualVetor, int valorElemento) {
    for (int i = 0; i < tam_AtualVetor; i++) {
        if (vetor[i] == valorElemento) {
            printf("O elemento %d foi encontrado na posição %d.\n\n", valorElemento, i);
            return; 
        }
    }
    printf("O elemento %d não foi encontrado no vetor.\n\n", valorElemento);
}

void inserirElemento(int vetor[], int *tam_AtualVetor, int elemento) {
    if (*tam_AtualVetor < 6) { 
        vetor[*tam_AtualVetor] = elemento;
        (*tam_AtualVetor)++;
        printf("Elemento %d inserido com sucesso!\n\n", elemento);
    } else {
        printf("O vetor está cheio, não é possível inserir mais elementos.\n\n");
    }
}


void excluirElemento(int vetor[], int *tama_AtualVetor, int elemento) {
    int encontrado = 0;
    
    for (int i = 0; i < *tama_AtualVetor; i++) {
        if (vetor[i] == elemento) {
            encontrado = 1;
            
            // Deslocar os elementos à direita do elemento a ser excluído para preencher o espaço.
            for (int j = i; j < *tama_AtualVetor - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            
            (*tama_AtualVetor)--;
            
            printf("Elemento %d foi excluído com sucesso!: ", elemento);
            break;
        }
    }
    
    if (!encontrado) {
        printf("O elemento %d não foi encontrado no vetor:", elemento);
    }
}

int main() {
    int Vetor[] = {1, 2, 3, 4, 5}; 
    int tamanho = 5; 
    
    travessiaVetor(Vetor, tamanho);
    
    int elementoBuscado = 3;
    buscaElemento(Vetor, tamanho, elementoBuscado);
    
     int elementoInserir = 6;
    inserirElemento(Vetor, &tamanho, elementoInserir);
    

    int elementoExcluir = 2;
    excluirElemento(Vetor, &tamanho, elementoExcluir);
    travessiaVetor(Vetor, tamanho);

    return 0;
}



