#include <iostream>
#include "biblioteka.cpp"

int main(){
    cout << "Witaj";
    cout << "Wybierz z poniższych liczb ta, która ci odpowiada"
    cout << "1 - Dodawania";
    cout << "2 - Odejmowania";
    cout << "3 - Mnozenia" << endl;

    int n;
    cin >> n;

    if (n==1)
    dodawanie();
    else

    if(n==2)
    odejmowanie();
    else

    if(n==3)
    mnozenie();
    else

    cout << "Podales zle dane.";

}
