#include<iostream>
using namespace std;
int main(){
	
	
	for(int i=0,j=10,k=10 ; i < 6 ; i++,k--,j--){
		for(int l=k ; l < 10 ; l++){
			cout << "/";
}
		for(int n=j;n>=2;n--){
			cout << "!" ;
		}
		cout << endl;
}
	return 0;
}
