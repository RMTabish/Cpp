#include<iostream>
using namespace std;


//function to convert decimal to binary 
int bin(int x)
{

int i;
//storing binary equivalent 
int array[10];

for(i=0;x>0;i++)
{
array[i]=x%2;
x=x/2;

}
for(i=i-1;i>=0;i--)
{
cout<<array[i];

}
return 0;
}
//function to convert decimal to octal

long octal(int n) 
{
//variable decrelation      
    long x = 0, i = 1;
   int a;
   
   //untill the the remainder is greater than zero
   
    while(n>0)
    {
        a = n%8;
        n = n/8;
        x = x + (a*i);
     i = i*10;
    }
    return x;
}

//function to convert decimal to hexadecimal

int hexa(int x)
{
   
    char array[100];
 
    
    int i = 0;
    while (x > 0)
   
     {
      
        int a = 0;
 
      
        a = x % 16;
 
      
        if (a < 10) 
        {
            array[i] = a + 48;
            i++;
        }
        else
         {
            array[i] = a + 55;
            i++;
        }
 
        x = x / 16;
    }
 
  
    for (int j = i - 1; j >= 0; j--)
        cout << array[j]<<endl;
        return 0; 
}
 


int main()
{
int x;
cout<<"enter decimal number"<<endl;
cin>>x;
cout<<"the binary is "<<bin(x)<<endl;
cout<<"the octal equilant is "<<octal(x)<<endl;
cout<<"the hexa decimal equilant is "<<hexa(x)<<endl;

return 0;

}

