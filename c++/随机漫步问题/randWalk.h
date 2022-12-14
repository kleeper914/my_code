#ifndef RANDWALK_H_
#define RANDWALK_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <Windows.h>
using namespace std;

#define PI 3.1415926

//用二维平面坐标法表示向量
class Vector
{
public:
    Vector(){}
    Vector(double a, double b):x(a), y(b){}
    ~Vector(){}
    void vectorReset(double length, double direction);
    double getDistance();
    void initVector();
    //operator overloading
    friend Vector operator+(Vector &a, Vector &b);
    friend Vector operator-(Vector &a, Vector &b);
    friend ostream& operator<<(ostream&, Vector a);
    Vector operator-();
    Vector operator*(double);
private:
    double x;
    double y;
};

double toRadian(double x);//角度转换为弧度

#endif