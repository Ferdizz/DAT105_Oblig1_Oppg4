//
// Created by Ferdinand Forgaard on 02.03.2016.
//

#include <sstream>
#include "Fraction.h"

Fraction::Fraction() {
    num = 0;
    denom = 1;
}

Fraction::Fraction(float numerator, float denominator) {
    this->num = numerator;
    this->denom = denominator;
}

Fraction *Fraction::operator+(Fraction target) {
    return new Fraction((this->num * target.denom) + (this->denom * target.num), this->denom * target.denom);
}

Fraction *Fraction::operator-(Fraction target) {
    return new Fraction((this->num * target.denom) - (this->denom * target.num), this->denom * target.denom);
}

Fraction *Fraction::operator*(Fraction target) {
    return new Fraction(this->num*target.num, this->denom*target.denom);
}

Fraction *Fraction::operator/(Fraction target) {
    return new Fraction(this->num*target.denom, this->denom*target.num);
}

Fraction::operator float() {
    return (num / denom);
}

string Fraction::toString() {
    ostringstream s;
    s << num << "/" << denom;
    return s.str();
}