#include<iostream>
using namespace std;
int* find(int array[],int target) {

	int* result = new int[2];
	int first = 0;
	int last = 0;
	int count = 0;
	bool check = false;

	for (int i = 0;i < 7;i++) {
		if (array[i] == target&&check==false) {
			check = true;
			first = i;

		}
		else if (array[i] == target&& check == true) {
			count++;

		}
		
	}
	last = first + count;
	result[0] = first;
	result[1] = last;

	return result;

}
int main() {

	int array[] = { 1,2,3,5,5,5,5};

	int target = 5;
	int* result = new int[2];
	result = find(array, target);
	cout << result[0] << endl;

	cout << result[1];


}