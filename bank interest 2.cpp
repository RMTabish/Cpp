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

int blc = 0;
int pnlt = 0;



//a=due amonunt
//p=penalty,b=balance
for (int i = 0;i < inst;i++)
{//penalities
int l_p = 0;
int a_p = 0;

int a = (amount / inst) + blc + pnlt;
f_a += a;
due[i] = a;

cout << "what is due date  " << endl;
int d;
cin >> d;
due_date[i] = d;


cout << "enter the amount ou want to pay " << endl;

int pay;

cin >> pay;
t_p_d += pay;

paid[i] = pay;
cout << "enter the paying date " << endl;
int pd;
cin >> pd;
paid_date[i] = pd;
int days;

if (pd > d)
{
days = pd - d;

}
else
{
days = 0;
}

late[i] = days;

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
blc = a - pay;
f_blc += blc;

balc[i] = blc;


}

cout << "\n\n\n\n";
cout<<"the information in descriptive form is "<<endl;
cout << "the dues are" << endl;
for (int i = 0;i < inst;i++)
{
cout << due[i] << ' ';

}
cout << endl;

cout << "the paid amunt are" << endl;
for (int i = 0;i < inst;i++)
{
cout << paid[i] << ' ';
}
cout << endl;

cout << "the due dates  are" << endl;
for (int i = 0;i < inst;i++)
{
cout << due_date[i] << ' ';
}
cout << endl;

cout << "the paid date are" << endl;
for (int i = 0;i < inst;i++)
{
cout << paid_date[i] << ' ';
}
cout << endl;

cout << "the late are" << endl;
for (int i = 0;i < inst;i++)
{
cout << late[i] << ' ';
}
cout << endl;

cout << "the penality are" << endl;
for (int i = 0;i < inst;i++)
{
cout << penal[i] << ' ';
}
cout << endl;

cout << "the bacalnce are" << endl;
for (int i = 0;i < inst;i++)
{
cout << balc[i] << ' ';
}
cout << endl;


cout << "final amount is " << f_a << endl;

cout << "the total paid amount is " << t_p_d << endl;

cout << "the total penalty is " << f_pl << endl;

cout << "The total balance is " << f_blc << endl;
cout<<"\n\n\n";
cout<<"The table is using 3-d array is \n\n"<<endl;


   int d_due[10][3];
int d_due_date[10][3];
int d_paid[10][3];
int d_paid_date[10][3];
int d_late[10][3];
int d_penal[10][3];
int d_balc[10][3];


for (int i = 0;i < 10;i++)
{
for (int j = 0;j < 3;j++)
{
d_due[i][j] = due[(j*10) + i];
d_due_date[i][j] = due_date[(j*10) + i];
d_balc[i][j] = balc[(j*10) + i];
d_late[i][j] = late[(j*10) + i];
d_paid[i][j] = paid[(j*10) + i];
d_penal[i][j] = penal[(j*10) + i];
d_paid_date[i][j] = paid_date[(j*10) + i];



}
}
cout << "loan amount " << "\t" << amount << "no of installements" << "\t" << inst << endl;
cout << "sno" << "\t" << "due amount" << "\t" << "due date" << "\t" << "paid amount" << "\t" << "paid date" << "\t" << "no of days \t penality \t balance ";
for (int i = 0;i < inst;i++)
{
for (int j = 0;j < 1;j++)
{
cout << i << endl << "\t\t" << d_due[i][i] << "\t\t" << d_due_date[i][i] << "\t\t" << d_paid[i][i] << "\t\t" << d_paid_date[i][i] << "\t\t" << d_late[i][i] << "\t\t" << d_penal[i][i] << "\t\t" << d_balc[i][i] << endl ;
}
}
cout<<endl;
cout << "total \t\t" << f_a << "\t\t\t\t" << t_p_d << "\t\t\t\t\t\t" << f_pl << "\t\t" << f_blc << endl;

cout<<endl;
cout<<"do you want to continue?: "<<endl;
cin>>c;
}
while(c=='y');
return 0;
}





