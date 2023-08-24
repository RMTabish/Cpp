#include <iostream>
using namespace std;

int main()
{  int numb , num1 , num2 , num3 , num4  ;
   
   cout << "Enter a 4 digit number " ;
    cin >> numb;
   cout << "The first  digit is : ";
    cin >> num1;
    cout << "The second digit is : ";
    cin >> num2;
    cout << "The third  digit is : ";
    cin >> num3;
    cout << "The fourth digit is : ";
    cin >> num4;
   
   int sum ;
   sum = num1 + num2 + num3 + num4 ;   
   cout << "The sum of integers entered is: " << sum << endl;
   
   int reverse = 0;
   
while(numb!= 0) 
{
        int remainder = numb%10;
        reverse = reverse*10 + remainder;
        numb = numb/10;
    }

    cout << "Reversed Number = " << reverse<<endl;
   

   return 0;
}
