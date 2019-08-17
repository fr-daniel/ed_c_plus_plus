#include <iostream>

using namespace std;

void mm(int vetor[], int &menor, int &maior)
{
    menor = vetor[0];
    maior = vetor[0];

    for (int i = 1; i < 10; i++)
    {
        if (menor > vetor[i])
            menor = vetor[i];
        if (maior < vetor[i])
            maior = vetor[i];
    }
}

int main()
{
    int menor, maior;
    int Vetor[] = {44, 22, 33, 4, 65, 23, 1, 53, 54, 12};

    mm(Vetor, menor, maior);

    std::cout << "Maior: " << maior << std::endl;
    std::cout << "\nMenor: " << menor << std::endl;

    return 0;
}
