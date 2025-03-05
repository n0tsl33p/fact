#include <iostream>
using namespace std;

// Функция для вычисления факториала
long long factorial(int n) 
{
    if (n < 0)
    {
        cout << "Факториал отрицательного числа не определен." << endl;
        return -1;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main() 
{
    setlocale(0, "");
    int number;
    cout << "Введите число: ";
    cin >> number;

    long long fact = factorial(number);
    if (fact != -1)
    {
        cout << "Факториал " << number << " равен " << fact << endl;
    }
    return 0;
}
