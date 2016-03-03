//
// Created by Ferdinand Forgaard on 02.03.2016.
//

#ifndef OBLIG1_OPPG4_FRACTION_H
#define OBLIG1_OPPG4_FRACTION_H

#include <string>

using namespace std;

class Fraction {

private:

    float num;
    float denom;

public:

    Fraction();
    Fraction(float numerator, float denominator);

    Fraction* operator+(Fraction target);
    Fraction* operator-(Fraction target);
    Fraction* operator*(Fraction target);
    Fraction* operator/(Fraction target);

    bool operator==(Fraction target);
    bool operator!=(Fraction target);
    bool operator<(Fraction target);
    bool operator>(Fraction target);
    bool operator<=(Fraction target);
    bool operator>=(Fraction target);

    friend ostream &operator<<(ostream &output, Fraction &f);
    friend istream &operator>>(istream &input, Fraction &f);

    operator float();

};


#endif //OBLIG1_OPPG4_FRACTION_H
