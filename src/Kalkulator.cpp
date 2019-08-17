#include "Kalkulator.h"

Kalkulator::Kalkulator()
{
    //ctor
}

Kalkulator::~Kalkulator()
{
    //dtor
}


Kalkulator::Kalkulator(double a, double b){
    this->a = a;
    this->b = b;

}

double Kalkulator::getA() const{
    return a;
}

double Kalkulator::getB() const{
    return b;
}


double Kalkulator::divide(double a, double b){

        if( b < 0){
            throw NegativanBrojException();
        }else{
            return a/b;
        }


}
