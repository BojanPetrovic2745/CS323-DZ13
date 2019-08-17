#ifndef NEGATIVANBROJEXCEPTION_H
#define NEGATIVANBROJEXCEPTION_H

#include <exception>
#include <iostream>

using namespace std;


class NegativanBrojException: public exception{
    public:
        NegativanBrojException();
        virtual ~NegativanBrojException();
        virtual const char* what() const throw(){
            return "Nije moguce deliti negativnim brojevima!";
        }


    protected:

    private:
};

#endif // NEGATIVANBROJEXCEPTION_H
