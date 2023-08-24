#include<vector>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

int main() {
	//intialize the two strings 
	string s1 = "rayi";
	string s2 = "iatr";

	//make two arrays for the count
	int array1[26];
	int array2[26];

	//intialize all the elements to zero 
	for (int i = 0;i < 26;i++) {
		array1[i]=0;
		array2[i]=0;

	}
	//find the size and if size is not the same just tell its not valid 
	if (s1.length() != s2.length()) {
		cout << "no ta valid anagram " << endl;
		return 0;

	}
	for (int i = 0;s1[i] != '\0';i++) {
		array1[s1[i] - 97]++;

	}

	for (int i = 0;s2[i] != '\0';i++) {
		array2[s2[i] - 97]++;

	}

	//now check the two arrays
	for (int i = 0;i < 26;i++) {
		if (array1[i] != array2[i]) {
			cout << "not a valid anagram ";
			return 0;

		}
	}
	cout << "a valid anagram ";
	return 0;


}