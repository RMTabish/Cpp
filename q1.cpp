#include<iostream>
using namespace std;

double calculateCharges(double hours)
{
	if (hours <= 3)
	{
		return 2;
	}
	else if (hours > 3)
	{
		return hours * (2 / 3) + (0.5) * hours;
	}
	else if (hours > 24)
	{
		return 10.00;

	}
}
int main()
{
	double x, y, z;
	cout << "Enter the hours parked for three cars: ";
	cin >> x;
	cin >> y;
	cin >> z;
	cout << "Car\t Hours\t Charge\n";
	cout << "1\t " << x << "\t" << calculateCharges(x) <<endl;
	cout << "2\t " << y << "\t" << calculateCharges(y) << endl;
	cout << "3\t " << z << "\t" << calculateCharges(z) << endl;
	cout << "TOTAL\t " << x + y + z << "\t" << calculateCharges(x) + calculateCharges(y) + calculateCharges(z) << endl;

	return 0;
	}
