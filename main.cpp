#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {

    Fraction *f1 = new Fraction(1,1);
    Fraction *f2 = new Fraction(3, 5);

    cout << "\nAddition:" << endl;
    cout << (*f1 + *f1)->toString() << endl;
    cout << (*f1 + *f2)->toString() << endl;

    cout << "\nSubtraction:" << endl;
    cout << (*f1 - *f1)->toString() << endl;
    cout << (*f1 - *f2)->toString() << endl;

    cout << "\nMultiplication:" << endl;
    cout << (*f1 * *f1)->toString() << endl;
    cout << (*f1 * *f2)->toString() << endl;

    cout << "\nDividing:" << endl;
    cout << (*f1 / *f1)->toString() << endl;
    cout << (*f1 / *f2)->toString() << endl;

    cout << "\nConversion:" << endl;
    cout << (float) *(*f1 + *f2) << endl;
    cout << (float) *(*f1 - *f2) << endl;

    return 0;
}