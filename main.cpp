#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {

    Fraction *f1 = new Fraction(1,1);
    Fraction *f2 = new Fraction(3, 5);

    cout << "\nAddition:" << endl;
    cout << "1/1 + 1/1 = " << *(*f1 + *f1) << endl;
    cout << "1/1 + 3/5 = " << *(*f1 + *f2) << endl;

    cout << "\nSubtraction:" << endl;
    cout << "1/1 - 1/1 = " << *(*f1 - *f1) << endl;
    cout << "1/1 - 3/5 = " << *(*f1 - *f2) << endl;

    cout << "\nMultiplication:" << endl;
    cout << "1/1 * 1/1 = " << *(*f1 * *f1) << endl;
    cout << "1/1 * 3/5 = " << *(*f1 * *f2) << endl;

    cout << "\nDividing:" << endl;
    cout << "1/1 / 1/1 = " << *(*f1 / *f1) << endl;
    cout << "1/1 / 3/5 = " << *(*f1 / *f2) << endl;

    cout << "\nConversion:" << endl;
    cout << "1/1 = " << (float) *f1 << endl;
    cout << "3/5 = " << (float) *f2 << endl;

    cout << "\nRelational operators: \n(0 = false, 1 = true)" << endl;
    cout << "1/1 == 1/1: " << (*f1 == *f1) << endl;
    cout << "1/1 != 3/5: " << (*f1 != *f2) << endl;
    cout << "1/1  > 3/5: " << (*f1 > *f2) << endl;
    cout << "3/5  < 1/1: " << (*f2 < *f1) << endl;
    cout << "1/1 <= 1/1: " << (*f1 <= *f1) << endl;
    cout << "3/5 <= 1/1: " << (*f2 <= *f1) << endl;
    cout << "1/1 >= 1/1: " << (*f1 >= *f1) << endl;
    cout << "1/1 >= 3/5: " << (*f1 >= *f2) << endl;

    cout << "\ncout:" << endl;
    cout << "Fraction 1: " << *f1 << endl;
    cout << "Fraction 2: " << *f2 << endl;

    cout << "\ncin:" << endl;
    cin >> *f1;
    cout << "Fraction 1 is now: " << *f1 << endl;

    return 0;
}