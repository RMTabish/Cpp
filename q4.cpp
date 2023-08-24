#include<iostream>
using namespace std;

int main()
{
cout<<"enter a string"<<endl;
char a[8];
for( int i=0;i<8;i++)
{
 cin.get(a,8);
}
cout<<"the reverse array is ";
for(int i=9;i>0;i--)
{
cout<<a[i-1];
}
cout<<"p  ";
return 0;

}
