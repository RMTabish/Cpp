//rai muhammad tabish
//i21-2541
//section a


#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
char c;
do
{
//final results sum
int f_a = 0;
int t_p_d = 0;
int f_pl = 0;
int f_blc = 0;




//asking user about the amount and installements

cout << "kindly enter the total amount:" << endl;
int amount;
cin >> amount;
cout << "kindly enter the mumber of installments you want to pay in " << endl;
int inst;
cin >> inst;

//making arrays to store data;
int due[100];
int due_date[100];
int paid[100];
int paid_date[100];
int late[100];
int penal[100];
int balc[100];

//set the balnce and penality to sero in start
int blc = 0;
int pnlt = 0;



//a=due amonunt

for (int i = 0;i < inst;i++)
{
//penalities
int l_p = 0;
int a_p = 0;

int a = (amount / inst) + blc + pnlt;
f_a += a;
due[i] = a;

cout << "what is due date  " << endl;
int d;
cin >> d;
due_date[i] = d;


cout << "enter the amount you want to pay " << endl;
int pay;
cin >> pay;
t_p_d += pay;
paid[i] = pay;


cout << "enter the paying date " << endl;
int pd;
cin >> pd;
paid_date[i] = pd;

int days;

//calculating the days late

if (pd > d)
{
days = pd - d;
}
else
{
days = 0;
}

late[i] = days;

//calculating the penality

if (pd > d)
{
l_p = (pd - d) * 100;

}
if (pay < a)
{
a_p = due[i] * 0.05;
}
pnlt = l_p + a_p;
f_pl += pnlt;
penal[i] = pnlt;

//total balance
blc = a - pay;
f_blc += blc;

balc[i] = blc;


}


cout << "\n\n\n\n";


//printing out the calculated information

cout << "the dues are" << endl;
for (int i = 0;i < inst;i++)
{
cout << due[i] << ' ';
}
cout << endl;
/////////
cout << "the paid amount are" << endl;
for (int i = 0;i < inst;i++)
{
cout << paid[i] << ' ';
}
cout << endl;
/////////
cout << "the due dates  are" << endl;
for (int i = 0;i < inst;i++)
{
cout << due_date[i] << ' ';
}
cout << endl;
////////
cout << "the paid date are" << endl;
for (int i = 0;i < inst;i++)
{
cout << paid_date[i] << ' ';
}
cout << endl;
////////
cout << "the late are" << endl;
for (int i = 0;i < inst;i++)
{
cout << late[i] << ' ';
}
cout << endl;
///////
cout << "the penality are" << endl;
for (int i = 0;i < inst;i++)
{
cout << penal[i] << ' ';
}
cout << endl;
//////
cout << "the balance are" << endl;
for (int i = 0;i < inst;i++)
{
cout << balc[i] << ' ';
}
cout << endl<<endl;
////

cout << "final amount is :" << f_a << endl;

cout << "the total paid amount is: " << t_p_d << endl;

cout << "the total penalty is:" << f_pl << endl;

cout << "the total balance is :" << f_blc << endl;

cout << "do you want to continue?:" << endl;

cin>>c;
}
while(c=='y');
return 0;


}
