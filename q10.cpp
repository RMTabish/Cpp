#include<iostream>
#include<cmath>
using namespace std;

double hypoteneous(double a,double b)
{
	double c = pow((a * a) + (b * b), (0.5));
	return c;

}

int main()
{
	double x, y;
	
	int count = 3;
	for (int i = 1;i <= count;i++)

	{
		cout << "enter two sides of triangle: \n";
		cin >> x;
		cin >> y;
		cout << "hypoteneous: " << hypoteneous(x, y) << endl;
	}
	return 0;


}
