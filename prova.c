#include <stdio.h>
#include <stdlib.h>

// definição do tamanho do vetor 
#define VETOR 10

//declaração da função que vai ordenar o vetor
void insertion_sort(int *a);

//função principal
int main(int argc, char** argv)
{
    int i, vet[VETOR];

     // Faz a leitura de 10 valores e salva no vetor, na ordem digitada. O vetor tem tamanho 10, ou seja, serão lido 10 números
     //digitados pelo usuário, dessa forma, enquanto o i, que é o contador de entradas, for menor ou igual ao tamanho do vetor
     //o laço "for" continuará pedindo para o usuário digitar números que ficarão salvos no vetor VETOR.
     
    for(i = 0; i < VETOR; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    // Pega  os valores ordenados que serãocolocados em ordem crescente pela função void insertion_sort(int *a)
    
    insertion_sort(vet);

    // Imprime os valores ordenados. O laço ''for'' existe para fazr a impressão dos números, já ordenados, do tamanho certo do
    //vetor (10).Enquanto o contador i for menor que 10, ele é implementado em +1 para passar para a próxima posição da sequência ordenada
    
    printf("\nValores ordenados em ordem crescente:\n");
    
    for(i = 0; i < VETOR; i++)
    {
        printf("%d ", vet[i]);
    }
    system("pause");
    return 0;
}

// Função de Ordenação por Inserção. nessa função temos um contador, i, uma variável que vai compor o vetor ordenado,j,e uma variável
//temporária, que irá guardar o número até não ter nenhum menor que ele. Para, então, ele passar a  integrar o vetor ordenado.
// O laço ''for'' faz essa comparação entre os valores digitados, sendo que o menor já vai para a posição crescente no vetor
//e o maior passa a ser temporariamente armazenado na variavel '' temporario'' até que não haja valor menor que esse. A função
// insertion sort,ou ordenação por inserção é o método que percorre um vetor de elementos da esquerda para a direita e à medida 
//que avança vai ordenando os elementos à esquerda.

void insertion_sort(int *a)
{
    int i, j, temporario;

    for(i = 1; i < VETOR; i++)
    {
        temporario = a[i];
        for(j = i-1; j >= 0 && temporario < a[j]; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = temporario;
    }
}


