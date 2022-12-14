#include "randWalk.h"

Vector operator+(Vector &a, Vector &b)
{
    Vector c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

Vector operator-(Vector &a, Vector &b)
{
    Vector c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    return c; 
}

Vector Vector::operator-()
{
    x = -x;
    y = -y;
    return Vector(x, y);
}

Vector Vector::operator*(double a)
{
    return Vector(x*a, y*a);
}

ostream& operator<<(ostream& cout, Vector a)
{
    cout << "(" << a.x << ", " << a.y << ")" << endl;
    return cout;
}

double toRadian(double x)
{
    return (x * PI / 180);
}

void Vector::vectorReset(double length, double direction)
{
    direction = toRadian(direction);
    x += length * cos(direction);
    y += length * sin(direction);
}

double Vector::getDistance()
{
    return sqrt(x*x + y*y);
}

void Vector::initVector()
{
    x = 0;
    y = 0;
}