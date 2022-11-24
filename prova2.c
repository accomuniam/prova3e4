#include <stdio.h>

//definição do tamanho do vetor

#define tamanho 10

//função que ordena o vetor digitado. Aqui temos um contador, i , uma variavel temporaria, que irá armazenar os valores maiores até que
//não haja valor maior que ele, para então, ser ordenado. Um vetor , j , que sua composição serão os algoritmos ordenados em ordem
//crescente. Nessa função o laço ''for'' faz a passagem das posições do vetor e a condicional faz a comparação entre os valores 
//existentes. Se o valor da primeira posição for maior que o da segunda, eles trocam de lugar. Se , o que ocupa agora a primeira posição
//for maior que o da terceira, ele é armazenado na variavel temporaria para que haja a comparação da segunda posição com a terceira e  
//assim seucessivamente até que cada um ocupe seu lugar correto na ordenação. A função bubblesort faz a passagem pel o vetor diversas 
//vezes, a cada vez fazendo flutuar para o topo o maior elemento da sequência. 

void bubblesort(int* vetor, int n) {
	int i, j, temporario;
	for (i = n-1; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			if (vetor[j] > vetor[j+1]) {
				temporario = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = temporario;
			}
		}
	}
}

// Função principal, que declara um vetor de 10 posições e já da seus valores, em ordem aleatória. Aqui temos um laço '' for''
// repassando os valores declarados, até o tamanho máximo do vetor, para serem armazanados na variavel vet[i].
int main() {
	int vet[tamanho] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	bubblesort(vet,tamanho);
	for (i = 0; i < tamanho; i++) {
		printf("%d ", vet[i]);
	}
	return(0);
}
