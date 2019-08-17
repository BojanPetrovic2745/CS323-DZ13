#include "ImeArtiklaNijeValidnoException.h"
#include "PrehrambeniProizvod.h"

ImeArtiklaNijeValidnoException::ImeArtiklaNijeValidnoException()
{
    //ctor
}

ImeArtiklaNijeValidnoException::~ImeArtiklaNijeValidnoException()
{
    //dtor
}

string ImeArtiklaNijeValidnoException::proveriIme(string ime){


    if(ime.size() < 2){
        throw "Ime nije validno! ";
    }else{
        return ime;
    }



}
