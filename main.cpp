#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
int wybory[3] = { 0 };
    do
    {
    srand( time(0) );

    cout << " LOTTO " << endl;

    int ilosc_trafien = 0;


    for (int i = 0; i < 3; i++ )
    {
        cout << "Podaj swoj wybor " << i+1 << ": ";
        cin >> wybory[i];
        for (int k = 0; k < i; k++ )
        {
            if ( wybory[k] == wybory[i] )
            {
                i--; break;
            }
        }
    }

    vector <int> los(49);

    for (int i = 0; i < los.size(); i++ )
    {
        los[i] = i+1;
    }

    int winers[ 3 ] = {0};

    for (int i = 0; i < 3; i++ )
    {
        int tmp = rand( ) % 49;

        winers[i] = los[ tmp ];
        los.erase(los.begin()+tmp);
    }

    cout << "Wylosowano: " << winers[0] << " " << winers[1] << " " << winers[2] << endl;

    for (int i = 0; i < 3; i++ )
    {
         for (int k = 0; k < 3; k++ )
        {
            if( wybory[i] == winers[k] )
                ilosc_trafien++;
        }
    }

    cout << "Trafiles: " << ilosc_trafien << endl;

    cout << "Hello world!" << endl;
    }
    while( wybory[0]  == 0 || wybory[1]  == 0; || wybory[2] == 0  )
    return 0;
}
