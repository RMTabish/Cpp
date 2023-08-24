#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//a
float y=34.789;
cout <<setw(9)<<setprecision(4)<<y<<endl;

//b
float z=7.0;
cout <<setw(5)<<setprecision(4)<<fixed<<z<<endl;

//c
float x=5.789*2.7183+12;
cout<<fixed<<x<<endl;

//d

cout<<left<<setw(7)<<67<<endl;
return 0;
}

