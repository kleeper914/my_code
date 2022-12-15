#include "Complex.h"

int main()
{
    Complex a(3.0, 4.0);
    Complex c;
    cout << "Enter a complex number: " << endl;
    while(cin >> c)
    {
        cout << "c is " << c << endl;
        cout << "complex conjugate is " << ~c << endl;
        cout << "a is " << a << endl;
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "2 * c is " << c * 2 << endl;
        cout << "Enter a complex number: " << endl;
    }
    cout << "the test is done !" << endl; 
    system("pause");
    return 0;
}