#include "Complex.h"

Complex Complex::operator+(const Complex &a) const
{
    return Complex(real+a.real, imaginary+a.imaginary);
}

Complex Complex::operator-(const Complex &a) const
{
    return Complex(real-a.real, imaginary - a.imaginary);
}

Complex Complex::operator*(const Complex &a) const
{
    Complex b;
    b.real = real*a.real - imaginary*a.imaginary;
    b.imaginary = real*a.imaginary + imaginary*a.real;
    return b;
}

Complex Complex::operator*(double a)
{
    return Complex(real*a, imaginary*a);
}

Complex Complex::operator*(int a)
{
    return Complex(real*a, imaginary*a);
}

Complex Complex::operator~() const
{
    return Complex(real, -imaginary);
}

ostream& operator<<(ostream& cout, const Complex &a)
{
    cout << "(" << a.real << ", " << a.imaginary << "i)";
    return cout;
}

istream& operator>>(istream& cin, Complex &a)
{
    cout << "real: ";
    cin >> a.real;
    cout << "imaginary: ";
    cin >> a.imaginary;
    return cin;
}