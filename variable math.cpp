
#include <iostream>
#include<iomanip>
using namespace std;
float Var_1,Var_2,Var_3;
float sq1,sq2,sq3;
float cu1,cu2,cu3;
float ha1,ha2,ha3;

int main() {

    cout << "Please\tenter\tVar_1"<<endl;
    cin>> Var_1;
    cout << "Please\tenter\tVar_2"<<endl;
    cin>> Var_2;
    cout << "Please\tenter\tVar_3"<<endl;
    cin>> Var_3;
    
    sq1=Var_1*Var_1;
    sq2=Var_2*Var_2;
    sq3=Var_3*Var_3;
    
    cu1=Var_1*Var_1*Var_1;
    cu2=Var_2*Var_2*Var_2;
    cu3=Var_3*Var_3*Var_3;
    
    ha1=Var_1/ 2;
    ha2=Var_2/ 2;
    ha3=Var_3/ 2;
   

    cout<<"\n\n"<<endl;
    cout<<"Variables\t\tNumbers\t\tSquare\t\tCube\t\tHalf"<<endl;
    cout<<"Var_1\t\t\t"<<Var_1<<"\t\t"<<sq1<<"\t\t"<<cu1<<"\t\t"<<ha1<<endl;
    cout<<"Var_2\t\t\t"<<Var_2<<"\t\t"<<sq2<<"\t\t"<<cu2<<"\t\t"<<ha2<<endl;
    cout<<"Var_3\t\t\t"<<Var_3<<"\t\t"<<sq3<<"\t\t"<<cu3<<"\t\t"<<ha3<<endl;    

  
    

    return 0;
}



