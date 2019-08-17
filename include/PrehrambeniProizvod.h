#ifndef PREHRAMBENIPROIZVOD_H
#define PREHRAMBENIPROIZVOD_H

#include <iostream>
using namespace std;

class PrehrambeniProizvod
{
    public:
        PrehrambeniProizvod();
        PrehrambeniProizvod(string ime, double cena);
        virtual ~PrehrambeniProizvod();

        string getIme();
        void setIme(string ime);



    protected:

    private:
        string ime;
        double cena;
};

#endif // PREHRAMBENIPROIZVOD_H
