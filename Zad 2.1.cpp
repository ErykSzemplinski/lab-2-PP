#include <iostream>

using namespace std;

int main()
{
    int n, wynik, suma;

    cout << "Sume ilu wyrazow ciagu chcesz policzyc? n = ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Musisz podac liczbe dodatnia. n = ";
        cin >> n;
    }

    if (n == 1)
    {
        cout << "suma szeregu wynosi: 1" << endl;
    }

    else
    {
        wynik = 0;
        for (int i = 1; i <= n; i++)
        {
            suma = 0;
            for (int j = 1; j <= i; j++)
            {
                wynik += j;
                suma += j;
            }
        }
        cout << "Suma szeregu wynosi: " << wynik << endl;
    }

    return 0;
}