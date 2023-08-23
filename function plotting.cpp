#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main()
{
int x,n;

cout<<"enter x"<<endl;
cin>>x;
cout<<"enter the n"<<endl;
cin>>n;

int b=n-1;



for(int i=x ; i >= 0 ; i--){
	int y=pow(i,n)+pow(i,n-1);
	cout << y << setw(i+1) << "*" << endl;
}
for(int i=0 ; i <=x ; i++){
	cout << i << "  " ;
}
cout << endl;
//for(int i=0;i<=y;i++)
//{
//for(int j=0 ; j<=x;j++)
//{if(j==y)
//cout<<"*";
//else
//cout<<" ";
//}/
//}
//cout<<endl;

return 0;

}
