#include "DeljenjeSaNulomException.h"

DeljenjeSaNulomException::DeljenjeSaNulomException()
{
    //ctor
}

DeljenjeSaNulomException::~DeljenjeSaNulomException()
{
    //dtor

}

string DeljenjeSaNulomException::DeljenjeSaNulom(double a, double b){

      if(b == 0){
            throw "Divison by zero!";
            return "Nije moguce deljenje sa nulom!";

      }else{
            double c = a/b;
            cout << c;
            return "Uspesno su podeljena dva broja!";

      }

}
