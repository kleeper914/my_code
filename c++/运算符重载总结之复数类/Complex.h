#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
#include <cstdlib>
using namespace std;

class Complex
{
public:
    Complex(){real = 0.0;imaginary = 0.0;}
    Complex(int rea, int ima):real(rea), imaginary(ima){}
    ~Complex(){}
    //operator overloading
    Complex operator+(const Complex &a) const;
    Complex operator-(const Complex &a) const;
    Complex operator*(const Complex &a) const;
    Complex operator*(double a);
    Complex operator*(int a);
    Complex operator~() const;
    friend ostream& operator<<(ostream& cout,const Complex &a);
    friend istream& operator>>(istream& cin, Complex &a);
private:
    double imaginary;
    double real;
};

#endif