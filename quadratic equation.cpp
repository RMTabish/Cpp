#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c, d;
    cout << "enter a b c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    d = (b * b) - 4 * (a * c);
    d > 0 ? cout << "the roots are real and distinct and the roots are " <<fixed<< (-b + sqrt(d)) / 2 * a <<fixed<< (-b - sqrt(d)) / 2 * a : d < 0 ? cout << "the equation have imaginary roots and the roots are " <<fixed<< (-b - sqrt(-(d))) / 2 * a <<' ' <<fixed<< (-b + sqrt(-(d))) / 2 * a : d==0?cout << "the root is real and equal "<<-b/2*a:cout<<"nothing";

}

