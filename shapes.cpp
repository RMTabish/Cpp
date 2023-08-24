#include<iomanip>
#include<iostream>
using namespace std;
char chr;
int main()

{
 cout<<"Please enter character"<<endl;
 cin>>chr;
 cout<<"\n"<<endl;
 
 cout<<setw(7)<<chr<<endl;
 cout<<setw(6)<<chr<<chr<<chr<<endl;
 cout<<setw(5)<<chr<<chr<<chr<<chr<<chr<<endl;
 cout<<setw(4)<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<endl;
 cout<<setw(3)<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<endl;
 cout<<setw(4)<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<endl;
 cout<<setw(5)<<chr<<chr<<chr<<chr<<chr<<endl;
 cout<<setw(6)<<chr<<chr<<chr<<endl;
 cout<<setw(7)<<chr<<endl;
 cout<<endl;
 

cout<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<endl;
cout<<chr<<setw(9)<<chr<<endl;
cout<<setw(2)<<chr<<setw(6)<<chr<<endl;
cout<<setw(5)<<chr<<chr<<endl;
cout<<setw(2)<<chr<<setw(6)<<chr<<endl;
cout<<chr<<setw(9)<<chr<<endl;
cout<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<endl;
cout<<endl;


cout<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<endl;
cout<<chr<<chr<<setw(11)<<chr<<chr<<endl;
cout<<chr<<chr<<chr<<setw(9)<<chr<<chr<<chr<<endl;
cout<<chr<<chr<<chr<<chr<<setw(7)<<chr<<chr<<chr<<chr<<endl;
cout<<chr<<chr<<chr<<chr<<chr<<setw(5)<<chr<<chr<<chr<<chr<<chr<<endl;
cout<<chr<<chr<<chr<<chr<<chr<<chr<<setw(3)<<chr<<chr<<chr<<chr<<chr<<chr<<endl;
cout<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<setw(1)<<chr<<chr<<chr<<chr<<chr<<chr<<chr<<endl;




return 0;
}

