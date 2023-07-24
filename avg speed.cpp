#include<iostream>
#include<iomanip>

using namespace std;

double avg_speed(double x, double y, double t3_sec, double X, double Y, double Z)
{
	double b = (X * 3.6);
	double t3_hrs = (t3_sec / 60);
	double time1 = (x / b);
	double time2 = (y / Y);
	double z = (Z * t3_hrs);

	
	double total_distance = (x + y + z);
	double total_time=(time1+time2+t3_hrs);

	//average speed
	double total_speed = total_distance / total_time;

	return total_speed;
}
int main()
{
	int q, w, e, r, t, y;
	cout << "Enter first distance in km : " << endl;
	cin >> q;
	cout << "Enter second distance in km : " << endl;
	cin >> w;
	cout << "Enter time for third distance in minutes: " << endl;
	cin >> e;
	cout << "Enter speed for first distance in m/s: " << endl;
	cin >> r;
	cout << "Enter speed for seconod distance in km/h: " << endl;
	cin >> t;
	cout << "Enter the speed in third distance in km/h: " << endl;
	cin >> y;
	cout << "Average speed over the whole journey is: " << avg_speed(q, w, e, r, t, y)<<"km/h"<<endl;


	return 0;
}
