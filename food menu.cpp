#include<iostream>
#include<string>
using namespace std;
int main()
{
	int order, q, p, s, o1, q1, o2, q3;

	cout << "1)pizza" << endl;
	cout << "2)burger" << endl;
	cout << "3)sandwitches" << endl;

	
	cin >> order;
	switch (order)
	{
	case 1:
		cout << "1)chicken tikka " << endl;
		cout << "2)chicken fatija " << endl;
		cout << "3)fourseasons in pizza " << endl;
		cin >> p;
		cout << "*sizes in pizza*" << endl;
		cout << "1)small(850 rs)" << endl;
		cout << "2)medieum(1200 rs)" << endl;
		cout << "3)large(1600 rs)" << endl;
		cin >> s;
		cout << "select the quantity " << endl;
		cin >> q;

		switch (s)
		{
		case 1:
			cout << "the bill is " << 850 * q << endl;
			break;
		case 2:
			cout << "the bill is " << 1200 * q << endl;
			break;
		case 3:
			cout << "the bill is " << 1600 * q << endl;
			break;
		}

		break;
	case 2:
		cout << "1)crispy chicken burger (600 Rs)" << endl;
		cout << "2)beef burger(650 Rs)" << endl;
		cout << "3)fish burger(700 Rs)" << endl;
		cin >> o1;
		cout << "enter the quantity :" << endl;
		cin >> q1;
		switch (o1)
		{
		case 1:
			cout << "your bill is " << 600 * q1 << endl;
			break;
		case 2:
			cout << "your bill is " << 659 * q1 << endl;
			break;
		case 3:
			cout << "your bill is " << 700 * q1 << endl;
			break;

		}

		break;
	case 3:
		cout << "*sandwitches**" << endl;
		cout << "1)club(300 Rs)" << endl;
		cout << "2)hicken(325 Rs)" << endl;
		cout << "3)vegetable(315 Rs)" << endl;
		cin >> o2;
		cout << "enter the quantity " << endl;
		cin >> q3;
		switch (o2)
		{
		case 1:
			cout << "your bill is " << 300 * q3 << endl;
			break;
		case 2:
			cout << "your bill is " << 325 * q3 << endl;
			break;
		case 3:
			cout << "your bill is " << 315 * q3 << endl;
			break;

		}

		break;
		return 0;
	}






}
