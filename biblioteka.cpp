#include <iostream>

using namespace std;

int dodawanie()
{

    double stopiena, stopienb, w;

    cout << " Podaj stopien wielomianu A \n";
    cin >> stopiena;

    cout << "Podaj stopien wielomianu B \n";
    cin >>  stopienb;

    double tab1[1000], tab2[1000];

    for(int Z= 1000; Z>=0; Z--)
    {
        tab1[Z] = 0;
        tab2[Z] = 0;
    }

    cout <<"Wypisz wspolczynniki wielomianu A";

    for( int b = stopiena ; b>=0; b--)
    {
        cin>>tab1[b];

        if (tab1[b] != 0)
        {
            cout << tab1[b];
            if (b>1) cout <<"x^" << b << "  +  ";
            else{cout << "x^" << b; break;}
        }
    }
    cout << endl;

    cout <<"Wypisz wspolczynniki wielomianu B";

    for( int c = stopiena ; c>=0; c--)
    {
        cin>>tab2[c];
        if (tab2[c] != 0)
        {
            cout << tab2[c];

            if (c>1) cout <<"x^" << c << "  +  ";
            else{cout << "x^" << c; break;}
        }
    }
    cout << endl;

    cout << "Wynik dodawania tych wielomianow:" << endl << endl;

    int G;
    if ( stopiena >= stopienb)
    {
        for (int G = 1; G<=stopiena; G++)
        {
        cout<<tab1[G]+tab2[G];
        cout<<"x^"<< G << "  +  ";
        }
    }
    else
    {
        for (int G = 1; G<=stopienb; G++)
        {
        cout<<tab1[G]+tab2[G];
        cout<<"x^"<< G << "  +  ";
        }
    }
}

int odejmowanie(){

    double stopiena, stopienb, w;

    cout << " Podaj stopien wielomianu A (Odjemna) \n";
    cin >> stopiena;
    cout << " Podaj stopien wielomianu B (Odjemnik) \n";
    cin >> stopienb;

    double tab1[1000], tab2[1000];

    for(int Z= 1000; Z>=0; Z--)
    {
        tab1[Z] = 0;
        tab2[Z] = 0;
    }


    cout <<"Podaj wspolczynniki wielomianu A (Odjemnej)";
    for( int b = stopiena ; b>=0; b--)
    {
        cin>>tab1[b];

        if (tab1[b] != 0)
        {
            cout << tab1[b];
            if (b>1) cout <<"x^" << b << "  +  ";
            else{cout << "x^" << b; break;}
        }
    }
    cout << endl;

    cout <<"Wypisz wspolczynniki wielomianu B (Odjemnika)";
    for( int c = stopienb ; c>=0; c--)
    {
        cin>>tab2[c];
        if (tab2[c] != 0)
        {
            cout << tab2[c];
            if (c>1) cout <<"x^" << c << "  +  ";
            else{cout << "x^" << c; break;}
        }
    }
    cout << endl;

    cout << endl << "Wynik odejmowania tych wielomianow:" << endl << endl;;
    int G;
    if ( stopiena >= stopienb)
    {
        for (int G = 1; G<=stopiena; G++)
        {
        cout<<tab1[G]-tab2[G];
        cout<<"x^"<< G << "  +  ";
        }
    }
    else
    {
        for (int G = 1; G<=stopienb; G++)
        {
        cout<<tab1[G]-tab2[G];
        cout<<"x^"<< G << "  +  ";
        }
    }
}

int mnozenie(){

    double stopiena, stopienb, w;

    cout << "Stopien wielomianu A \n";
    cin >> stopiena;
    cout << "Stopien wielomianu B \n";
    cin >> stopienb;

    double tab1[1000], tab2[1000];

    // Czystka tabów
    for(int Z= 1000; Z>=0; Z--)
    {
        tab1[Z] = 0;
        tab2[Z] = 0;
    }


    cout <<"Wypisz wspolczynniki wielomianu A";
    for( int b = stopiena ; b>=0; b--)
    {
        cin>>tab1[b];
        if (tab1[b] != 0)
        {
            cout << tab1[b];
            if (b>1) cout <<"x^" << b << "  +  ";
            else{cout << "x^" << b; break;}
        }
    }
    cout << endl;

    cout <<"Wypisz wspolczynniki wielomianu B";
    for( int c = stopienb ; c>=0; c--)
    {
        cin>>tab2[c];
        if (tab2[c] != 0)
        {
            cout << tab2[c];
            if (c>1) cout <<"x^" << c << "  +  ";
            else{cout << "x^" << c; break;}
        }
    }
    cout << endl;

    cout << "Wynik mnozenia dwóch wielomianów:" << endl;

	int i = 0;
	int c[100];

	for (int r = stopiena; r >= 0; r--) {
 		for (int t = stopienb; t >= 0; t-- ) {
		 	c[i] = tab1[r] * tab2[t];

		 	if (c[i] != 0) {
		   	   cout << c[i];
   	   		   if (r + t > 0)
		   	   	  cout << "x^" << r + t << "  +  ";
		    }
		    i++;
 	 	}
	}

return 0;
}

