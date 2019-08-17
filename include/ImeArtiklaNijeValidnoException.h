#ifndef IMEARTIKLANIJEVALIDNOEXCEPTION_H
#define IMEARTIKLANIJEVALIDNOEXCEPTION_H

#include "PrehrambeniProizvod.h"
#include <iostream>
#include <string>

using namespace std;

class ImeArtiklaNijeValidnoException
{
    public:
        ImeArtiklaNijeValidnoException();
        virtual ~ImeArtiklaNijeValidnoException();
        string proveriIme(string ime);


    protected:

    private:


};

#endif // IMEARTIKLANIJEVALIDNOEXCEPTION_H
