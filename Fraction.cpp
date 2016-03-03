//
// Created by Ferdinand Forgaard on 02.03.2016.
//

#include <sstream>
#include <iostream>
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


bool Fraction::operator==(Fraction target) {
    return (float) *this == (float) target;
}

bool Fraction::operator!=(Fraction target) {
    return (float) *this != (float) target;
}

bool Fraction::operator<(Fraction target) {
    return (float) *this < (float) target;
}

bool Fraction::operator>(Fraction target) {
    return (float) *this > (float) target;
}

bool Fraction::operator<=(Fraction target) {
    return (float) *this <= (float) target;
}

bool Fraction::operator>=(Fraction target) {
    return (float) *this >= (float) target;
}

ostream& operator<<(ostream &output, Fraction &f) {
    output << f.num << "/" << f.denom;
    return output;
}

istream& operator>>(istream &input, Fraction &f) {
    double num, denom;

    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> denom;

    f.num = num;
    f.denom = denom;

    return input;
}

Fraction::operator float() {
    if(denom == 0){
        throw overflow_error("ERROR - Divide by zero attempted!");
    }
    return (num / denom);
}