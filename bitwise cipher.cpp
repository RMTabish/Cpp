#include<iostream>
#include<iomanip>

using namespace std;

unsigned int IDbit(int numb)
{
   
	unsigned int AccID = numb >> 9;
	return AccID;
}

unsigned int account_numb_bit(int numb)
{
   
    unsigned int Acc_num = numb & 511;
	return Acc_num;

}




unsigned int encrypt(int numb)
{
	int a = 5, b = 233;
	int c = (numb *a) + b;
	
	
	return c;
}

unsigned int decrypt(int c)
{
    int a1 = 5, b1 = 233;
    int c1=(c-b1)/a1;
    
    return c1;
}


int main()
{
	int number;
	cout<<"please enter the number"<<endl;
	cin >> number;
	cout<<"the number you entered is "<< number<<endl;
	cout << "the customer id is : " << IDbit(number)<<endl;
    cout << "the account number is : " << account_numb_bit(number) << endl;
	cout << "the encrypted number is : " << encrypt(number) << endl;

	
	int c=encrypt(number);
	
	cout << "the descrypted form is : " << decrypt(c) << endl;

	return 0;
}
