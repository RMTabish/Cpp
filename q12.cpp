#include<iostream>
#include<cmath>
using namespace std;

int binDec(int x)
{
   
   int i=0,y=0,z;
   while(x!=0)
{
       z=x%10;
       y=y+pow(2,i)*z;
       x=x/10;
       i++;
    }  
    return y;
}
int main()
{
   int binary,decimal;
   cout<<"Enter a binary number :"<<endl;
   cin>>binary;
   decimal=binDec(binary);
   cout<<"Decimal equivalant of binary "<<binary<<" is : "<<decimal;
   return 0;
}
