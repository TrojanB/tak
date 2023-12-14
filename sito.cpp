#include <iostream>
#include <math.h>

using namespace std;

void zrob(int a, int przedzial){
    for(int i = 2*a;i<=przedzial;i+=a){
        
    }
}

int main()
{
    int przedzial = 100;

    bool liczby[przedzial];

    // inicjalizacja tablicy
    for (int i = 0; i < przedzial; i++)
        liczby[i] = false;


    // usuwanie wielokrotnosci
    for (int i = 2; i <= sqrt(przedzial); i++)
    {
        if (liczby[i] == false)
        {
            for (int j = i * i; j <= przedzial; j += i)
            {
                liczby[j] = true;
            }
        }
    }

    cout << "Liczby pierwsze z przedzialu 2 do " << przedzial << endl;

    for (int i = 2; i <= przedzial; i++)
    {
        if (liczby[i] == false)
        {
            cout << i << ", ";
        }
    }
    
    while(true){
        
    }

    system("PAUSE >nul");
    return 0;
}
