#include <iostream>
#include "Header.h"

using namespace std;

double Summ(double a, double b) {
    return a + b;
}

void Foo() {
    cout << "Foo" << endl;
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << Summ(a, b) << endl;
}