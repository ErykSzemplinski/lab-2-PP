#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Podaj liczbe od 1 do 12 reprezentujaca wybrany miesiac w roku" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Styczen"<< endl;
        cout << "Ten miesiac ma 31 dni" << endl;
        cout << "Ten miesiac jest pochmurny" << endl;
        break;
    case 2:
        cout << "Luty" << endl;
        cout << "Ten miesiac ma 28 dni" << endl;
        cout << "Ten miesiac jest pochmurny" << endl;
        break;
    case 3:
        cout << "Marzec" << endl;
        cout << "Ten miesiac ma 31 dni" << endl;
        cout << "Ten miesiac jest pochmurny" << endl;
        break;
    case 4:
        cout << "Kwiecien" << endl;
        cout << "Ten miesiac ma 30 dni" << endl;
        cout << "Ten miesiac jest sloneczny" << endl;
        break;
    case 5:
        cout << "Maj" << endl;
        cout << "Ten miesiac ma 31 dni" << endl;
        cout << "Ten miesiac jest sloneczny" << endl;
        break;
    case 6:
        cout << "Czerwiec" << endl;
        cout << "Ten miesiac ma 30 dni" << endl;
        cout << "Ten miesiac jest sloneczny" << endl;
        break;
    case 7:
        cout << "Lipiec" << endl;
        cout << "Ten miesiac ma 31 dni" << endl;
        cout << "Ten miesiac jest sloneczny" << endl;
        break;
    case 8:
        cout << "Sierpien" << endl;
        cout << "Ten miesiac ma 31 dni" << endl;
        cout << "Ten miesiac jest sloneczny" << endl;
        break;
    case 9:
        cout << "Wrzesien" << endl;
        cout << "Ten miesiac ma 30 dni" << endl;
        cout << "Ten miesiac jest sloneczny" << endl;
        break;
    case 10:
        cout << "Pazdziernik" << endl;
        cout << "Ten miesiac ma 31 dni" << endl;
        cout << "Ten miesiac jest pochmurny" << endl;
        break;
    case 11:
        cout << "Listopad" << endl;
        cout << "Ten miesiac ma 30 dni" << endl;
        cout << "Ten miesiac jest pochmurny" << endl;
        break;
    case 12:
        cout << "Grudzien" << endl;
        cout << "Ten miesiac ma 31 dni" << endl;
        cout << "Ten miesiac jest pochmurny" << endl;
        break;
    default:
        cout << "Wpisales liczbe spoza zakresu";
    }
    return 0;
}