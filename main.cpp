#include <iostream>
#include <string>

#include "Kalkulator.h"
#include "ImeArtiklaNijeValidnoException.h"

using namespace std;

int main()
{
    DeljenjeSaNulomException d;

    int a;
    int b;
    PrehrambeniProizvod pr("M", 30);
     ImeArtiklaNijeValidnoException ex;


    try{

    cin >> a >> b;

    Kalkulator k(a, b);

    if(k.getB() == 0){
        throw d.DeljenjeSaNulom(k.getA(), k.getB());
    }

    cout << k.divide(k.getA(), k.getB()) << endl;

    cout << ex.proveriIme(pr.getIme());



    }catch(const char* msg){
        cerr << msg << endl;

    }



    return 0;
}
