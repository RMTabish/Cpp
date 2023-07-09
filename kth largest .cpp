#include<iostream>
using namespace std;


int KthLargest(int array[], int kth) {
	//sort the array in decending order 
	//buble sort 
	int length = 6;
	
	for (int i = 0;i < length;i++) {
		for (int j = 0; j < length-i-1; j++)
		{
			if (array[j] < array[j + 1]) {
				//swap
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;

             }
		}
      }


	for (int i = 0;i < 6;i++) {
		cout << array[i];

	}
	cout << endl;

	return array[kth];

}

int main() {
	int p[] = { 4,9,5,6,1,3};
	cout << KthLargest(p, 3);


}