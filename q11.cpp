#include <iostream>
using namespace std;

int main()
{
const signed int x = -99 ;
int val , max_val , min_val ;
cout << "insert a value : " ;
 cin >> val ;
 

min_val = val ;
max_val = val ;

 while(val != x)
 {
  if (val>max_val)
  {
   max_val = val ;
  }
  if (val<min_val)
  {
   min_val = val;
  }
  cout << "Enter a value : ";
   cin >> val ;
 }
cout << "The maximum value is : "<< max_val << endl;
cout << "The minimum value is : "<< min_val << endl;

return 0;
}
