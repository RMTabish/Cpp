#include<iostream>
#include <cstddef>
#include <string>

using namespace std;

int main()
{
string m1,m2,m3,m4,m5,m6;
string p1;
string f1,f2,r1,d1;
string  w1,w2,w3;

int match=(rand()%5)+1;
cout<<"Afghanistan vs Australia, ";
if(match>2)
{
m1="afghanistan";
cout<<m1<<" wins"<<endl;
}
else
{
m1="Australia";
cout<<m1<<" wins"<<endl;
}
cout<<"Bangladesh vs England, ";
if(match>1)
{
m2="Bangladesh";
cout<<m2<<" wins"<<endl;
}
else
{
m2="england";
cout<<m2<<" wins"<<endl;
}
cout<<"india vs ireland, ";
if(match>5)
{
m3="ireland";
cout<<m3<<" wins"<<endl;
}
else
{
m3="india";
cout<<m3<<" wins"<<endl;
}
cout<<" pakistan vs scotland, ";
if(match>1)
{
m4="pakistan";
cout<<m4<<" wins"<<endl;
}
else
{
m4="scotland";
cout<<m4<<" wins"<<endl;
}
cout<<" south africa vs sirilanka, ";
if(match>4)
{
m5="southafrica";
cout<<m5<<" wins"<<endl;
}
else
{
m5="sirilanka";
cout<<m5<<" wins"<<endl;
}
cout<<" west indies vs zimbabwe, ";
if(match>3)
{
m6="west indies";
cout<<m6<<" wins"<<endl;
}
else
{
m6="zimbabwe";
cout<<m6<<" wins"<<endl;
}
cout<<"ROUND 2"<<endl;

cout<<m1<<" vs "<<m2<<" ";
if(match>0)
{w1=m1;
cout<<w1<<" wins "<<endl;
}
else
{
w1=m2;
cout<<w1<<" wins"<<endl;
}
cout<<m3<<" vs "<<m4<<" ";
if(match>0)
{
w2=m4;
cout<<w2<<" wins "<<endl;
}
else
{ 
w2=m3;
cout<<w2<<" wins"<<endl;
}
cout<<m5<<" vs "<<m6<<" ";
if(match>2)
{
w3=m6;
cout<<w3<<" wins "<<endl;
}
else
{
w3=m5;
cout<<w3<<" wins"<<endl;

}
cout<<"ROUND 3"<<endl;
cout<<w1<<" vs "<<w2<<" ";
if(match>5)
{

cout<<w1<<"wins"<<endl;
}
else
{
cout<<w2<<"wins"<<endl;
}

cout<<w2<<" vs "<<w3<<" ";
if(match>7)
{

cout<<w2<<"wins"<<endl;
}
else
{
cout<<w3<<"wins"<<endl;
}

cout<<w1<<" vs "<<w3<<" ";
if(match>9)
{

cout<<w3<<"wins"<<endl;
}
else
{
cout<<w1<<"wins"<<endl;
}


int toss= rand()%10;

if(toss<3)
{
p1=w1;
f1=w2;
f2=w3;
cout<<p1<<" qualifies for the final after winnig the toss"<<endl;
}
else if(toss>5)
{

p1=w3;
f1=w1;
f2=w2;

cout<<p1<<" qualifies for the final after winnig the toss"<<endl;
}
else if(toss==3)
{
f1=w1;
f2=w3;
p1=w2;

cout<<p1<<" qualifies for the final after winnig the toss"<<endl;
}

cout<<f1<<" vs "<<f2<<" ";

if(match>2)
{ r1=f1;
cout<<r1<<" wins"<<endl;
}
else 
{r1=f2;
cout<<r1<<" wins"<<endl;
}
cout<<"Final Round "<<endl;

cout<<r1<<" vs "<<p1<<" ";
if(match<9)
{
d1=r1;
cout<<d1<<" wins the final"<<endl;
}
else
{
d1=p1;
cout<<d1<<" wins the final"<<endl;
}

cout<<"congratulate to "<<d1<<" on winnig the T20 world cup "<<endl;

return 0;

}

