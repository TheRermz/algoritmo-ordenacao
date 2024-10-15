#include <stdio.h>
#include <stdlib.h>
/*
1. Dois arrays, um com os valores bagunçados e outro com os valores finais alinhados de forma crescente;
2. For() aninhado em uma função de sorting, realizando a organização do array de forma crescente;
3. Realizar um printf() para demonstrar o resultado final.
*/

/*
variables -> arr, sortedArr, temp
*/

void SortingMethod(int unsortedSpaghetti[], int arrSize)
{
    int sortedSpaghetti[arrSize];

    for (int position = 0; position < sizeof(unsortedSpaghetti); position++)
    {
        // TODO: Parte da comparação de valores;
    }
}

int main()
{
    int unsortedSpaghetti[5] = {3, 23, 2, 105, 200};
    int arrSize = sizeof(unsortedSpaghetti) / sizeof(unsortedSpaghetti[0]);

    return 0;
}
