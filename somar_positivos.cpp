#include <iostream>
#include <vector>

using namespace std;

int somar_positivos(vector<int> numeros)
{
    if (numeros.size() == 0)
        return 0;

    int ultimo = numeros.back() >= 1 ? numeros.back() : 0;
    numeros.pop_back();

    return ultimo + somar_positivos(numeros);
}

int main()
{

    int n;
    cin >> n;

    std::vector<int> numeros;

    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        numeros.push_back(temp);
    }

    std::cout << somar_positivos(numeros) << std::endl;

    return 0;
}