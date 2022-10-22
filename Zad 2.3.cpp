#include <iostream>
using namespace std;

int main() {
 
 int a;
 cout << "Podaj liczbe od 1 do 12"<< endl;
 cin >> a;
 switch (a)
 {
    case 1:
    cout << "Styczen";
    break;
    case 2:
    cout << "Luty";
    break;
    case 3:
    cout << "Marzec";
    break;
    case 4:
    cout << "Kwiecien";
    break;
    case 5:
    cout << "Maj";
    break;
    case 6:
    cout << "Czerwiec";
    break;
    case 7:
    cout << "Lipiec";
    break;
    case 8:
    cout << "Sierpien";
    break;
    case 9:
    cout << "Wrzesien";
    break;
    case 10:
    cout << "Pazdziernik";
    break;
    case 11:
    cout << "Listopad";
    break;
    case 12:
    cout << "Grudzien";
    break;
    default:
    cout << "Wpisales liczbe spoza zakresu";
 }
 if (a=1,3,5,7,8,10,12){
    cout << "Ten miesiac ma 31 dni";
 }
 else if (a=4,6,9,11){
    cout << "Ten miesiac ma 30 dni";
 }
 else if (a=2){
    cout << "Ten miesiac ma 28 dni";
 }
 if (a=4,5,6,7,8,9){
    cout << "Ten miesiac jest sloneczny";
 }
 else if (a=1,2,3,10,11,12){
     cout << "Ten miesiac jest pochmurny";
 }
return 0;
}