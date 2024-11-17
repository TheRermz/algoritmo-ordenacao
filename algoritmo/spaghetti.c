#include <stdio.h>
#include <stdlib.h>

/* Imprime cada elemento do array por meio de um loop; */
void printArray(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* Função para encontrar o índice do maior elemento, percorrendo por todo seu tamanho
e atualizando o 'MaxIndex' ao encontrar o maior; */
int findMaxIndex(int arr[], int tamanho)
{
    int MaxIndex = 0;
    for (int i = 1; i < tamanho; i++)
    {
        if (arr[i] > arr[MaxIndex])
        {
            MaxIndex = i;
        }
    }

    return MaxIndex;
}

/* Onde o Spaghetti Sort ocorre, encontrando o maior elemento e o posicionando
ao fim da fila de forma não ordenada. Após percorrer a fila, os elementos
estarão ordenados corretamente. */
void spaghettiSort(int arr[], int tamanho)
{
    int sortedIndex = tamanho - 1;

    while (sortedIndex >= 0)
    {
        int maxIndex = findMaxIndex(arr, sortedIndex + 1);
        int maxValue = arr[maxIndex];

        arr[maxIndex] = arr[sortedIndex];
        arr[sortedIndex] = maxValue;

        sortedIndex--;
    }
}

/* Main, onde o array e variáveis são declarados,
no fim mostrando o resultado do sorting. */
int main()
{

    int arr[] = {14, 57, 89, 23, 45, 67, 102, 301, 450, 578,68, 39, 274, 56, 900, 32, 512, 607, 800, 123,214, 74, 56, 890, 127, 689, 782, 35, 15, 98,};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Arry original:\n");
    printArray(arr, tamanho);

    spaghettiSort(arr, tamanho);

    printf("Array ordenado:\n");
    printArray(arr, tamanho);

    return 0;
}