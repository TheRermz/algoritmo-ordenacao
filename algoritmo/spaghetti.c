#include <stdio.h>
#include <stdlib.h>

/* Imprime cada elemento do array por meio de um loop; */
void printArray(int arr[20], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* Função para encontrar o índice do maior elemento, percorrendo por todo seu tamanho
e atualizando o 'MaxIndex' ao encontrar o maior; */
int findMaxIndex(int arr[20], int tamanho)
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
void spaghettiSort(int arr[20], int tamanho)
{
    int sortedIndex = tamanho - 1;

    while (sortedIndex >= 0)
    {
        int maxIndex = findMaxIndex(arr, tamanho);
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

    int arr[20] = {3, 1, 81, 32, 15, 25, 85, 4, 6, 9, 44, 12, 65, 48, 74, 2, 32, 14, 28, 41};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, tamanho);

    spaghettiSort(arr, tamanho);

    printf("Array ordenado:\n");
    printArray(arr, tamanho);

    return 0;
}
