#include<iostream>
using namespace std;
int main() {
	int arr[40];
	int size;
	int temp;
	int p=0;
	int key;
	cout << "ENTER THE SIZE OF YOUR ARRAY" << flush;
	cin >> size;
	cout << "ENTER ARRAY ELEMENTS" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "YOUR UNSORTED ARRAY IS: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ",";
		cout << endl;
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "YOUR BUBBLESORTED ARRAY IS" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "," << endl;
	}
	//linear search
	cout << "ENTER THE NUMBER YOU WANT TO SEARCH IN ARRAY" << endl;
	cin >> key;
	
	

}