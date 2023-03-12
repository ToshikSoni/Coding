#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;

public:
    Complex()
    {
        cout << "enter the real part : " << endl;
        cin >> real;
        cout << "enter the imag part: " << endl;
        cin >> imag;
    }
    friend void add(Complex &, Complex &);
    friend void multiply(Complex &, Complex &);
};
void add(Complex &a, Complex &b)
{
    int sum1, sum2;
    sum1 = a.real + b.real;
    sum2 = a.imag + b.imag;
    cout << "sum = " << sum1 << " + " << sum2 << "i" << endl;
}
void multiply(Complex &a, Complex &b)
{
    int mult1, mult2, mult3, mult4;
    mult1 = a.real * b.real;
    mult2 = a.real * b.imag;
    mult3 = a.imag * b.real;
    mult4 = a.imag * b.imag;
    int total1, total2;
    total1 = mult1 + mult4;
    total2 = mult2 + mult3;
    cout << "multiplication = " << total1 << " + " << total2 << "i" << endl;
}
int main()
{
    Complex c1;
    Complex c2;
    add(c1, c2);
    multiply(c1, c2);
    return 0;
}