#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    
    cout <<"Podaj liczbe gosci" << endl;
    cin >> a;
    cout <<"Podaj liczbe kawalkow pizzy" << endl;
    cin >> b;

c = b / a;
cout <<"Liczba kawałkow prypadajacych na jedna osobe: " << c; endl;
d = b % a;
cout <<"Liczba niewykorzystanych kawałków przypadających na gospodarza: " << d;


return 0;
}