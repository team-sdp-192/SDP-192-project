#include <iostream>

using namespace std;

double Summ(double a, double b) {
    return a + b;
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << Summ(a, b) << endl;
}