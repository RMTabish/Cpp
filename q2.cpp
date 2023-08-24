#include<iostream>
using namespace std;
int main()
{
int matrix[5][5];
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
cout << "Enter the values : ";
//taking input
cin>>matrix[i][j];
}
}
int sum[]={0,0,0,0,0};
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
//storing every the 3d array in 1d array
sum[i]=matrix[i][j]+sum[i];
}

//displaying the array
for(int i=0;i<5;i++)
cout<<sum[i]<<endl;
return 0;
}
