//rai muhammad tabish 
//i21-2541
//question 2

#include<iostream>
#include<iomanip>

using namespace std;

//function to add without '+' operator

double addition(int a, int b)
{
//stop when the binary of power is all zero

while (b > 0)
{

unsigned power = a & b;

a = a ^ b;

b = power << 1;
}
cout << a;
return 0;
}

//funtion to subtract without '-' operator
int subtraction(int a, int b)
{

while (b > 0)
{
unsigned power = (~a) & b;
a = a ^ b;
b = power << 1;
}
return a;

}
double square(int x)
{
    
    int a = 0;
 int b = 1;
 
 //square converts negative to positive 
  
  if(x<0)
  {
    x = abs(x);
 }
 

    for(int i=x;i>0;i--)
    {
       
        a = a + b;
       
        b = b + 2;
    }
 
    return a;
}

int main()
{
int p, q;

cout << "enter two numbers " << endl;
cin >> p >> q;


cout << "the sum of these two numbers is " << endl;
addition(p, q);
cout << "\nthe subtraction of these two numbers is " << endl;
cout<<subtraction(p, q);

}
