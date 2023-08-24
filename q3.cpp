#include<iostream>
using namespace std;
int main()
{
int array1[3][3]={1,2,3,4,5,6,7,8,9};
int array2[3][3]={9,8,7,6,5,4,3,2,1};

int sum[3][3];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
sum[i][j]=array1[i][j]+array2[i][j];


}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<sum[i][j]<<" ";


}
cout<<"\n";


}
return 0;
}
