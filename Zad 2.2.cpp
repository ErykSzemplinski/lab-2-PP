#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    while (a <= 0)
    {
        cout << "Podaj liczbe dodatnia a = ";
        cin >> a;
    }
    while (b <= 0)
    {
        cout << "Podaj liczbe dodatnia b = ";
        cin >> b;
    }
    cout << "Wiersz o dlugosci a:" << endl;
        for (int i = 1; i <= a; ++i)
        {
            cout << '*';
        }
        cout << endl;
        cout << "Kolumna o dlugosci b:" << endl;
        for (int i = 1; i <= b; ++i)
        {
                cout << '*' << endl;
        }
        cout << endl;
        cout << "Prostokat gwiazdek o wymiarach a (wysokosc) na b (szerokosc):" << endl;
        for (int i = 1; i <= a; ++i)
        {
            for (int x = 1; x <= b; ++x)
            {
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
        cout << "Obwod prostokatu o wymiarach a (wysokosc) na b (szerokosc):" << endl;
        for (int i = 1; i <= a; ++i)
        {
            for (int x = 1; x <= b; ++x)
            {
                if (i == 1 || i == a || x == 1 || x == b)
                    cout << "*";
                else
                    cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
        cout << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu z przyprostokatnymi o wymiarach a:" << endl;
        for (int i = 1; i <= a; ++i)
        {
            for (int x = 1; x <= i; ++x)
            {
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
        cout << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu z przyprostokatnymi o wymiarach a:" << endl;
        for (int i = a; i >= 1; --i)
        {
            for (int j = a-i; j > 0; --j)
                cout << " ";
            for (int x = i; x > 0; --x)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    return 0;
}