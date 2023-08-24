#include<iostream>
#include<ctime>

using namespace std;
int main()
{
int money =100;
int item =1,cost;
do
{
srand(time(0));
cost=(rand()%money)+1;
money =money -cost;
cout<<"item : "<<item <<"    "<<"price: "<<cost<<endl;
item++;

}

while(money>0);

cout<<"the number of items purchased by the child is "<<item-1 <<endl;
return 0;

}

