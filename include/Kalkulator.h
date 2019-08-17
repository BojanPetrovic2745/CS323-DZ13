#ifndef KALKULATOR_H
#define KALKULATOR_H
#include "NegativanBrojException.h"
#include "DeljenjeSaNulomException.h"
class Kalkulator
{
    public:
        Kalkulator();
        ~Kalkulator();
        Kalkulator(double a, double b);

        double getA() const;
        double getB() const;

        double divide(double a, double b);

    protected:

    private:
        double a;
        double b;

};

#endif // KALKULATOR_H
