#include "PrehrambeniProizvod.h"

PrehrambeniProizvod::PrehrambeniProizvod()
{
    //ctor
}

PrehrambeniProizvod::~PrehrambeniProizvod()
{
    //dtor
}

PrehrambeniProizvod::PrehrambeniProizvod(string ime, double cena){
    this->ime = ime;
    this->cena = cena;
}

string PrehrambeniProizvod::getIme(){
    return ime;

}

void PrehrambeniProizvod::setIme(string ime){
    this->ime = ime;
}
