#include <iostream>
using namespace std;

int main()
{
    //variable decleration
    int number, x=0;
    int i;

    //take input
    cout << "enter any number to checkif it is perfect or not :  " << endl;
    cin >> number;
    //loops to add the divisor of numebr
    for ( i=1;i <=number;i++)
    {
        if (number % i == 0)
            x = x + i;
     
    }

    //check if the sum of divisors is equal to the number entered by user
    if (x == number)
    {
        cout << "the number " << i << " is a perfect number" << endl;
    }

    else
        cout << "the number " << i << " is not a perfect number" << endl;
   

    return 0;
}
