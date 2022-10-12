#include "Sort.h"
#include<iostream>
using namespace std;

void Sort::getdata(void)
{
	int temp;
	cout << "ENTER THE SIZE OF YOUR ARRAY: " << flush;
	cin >> size;
	cout << "ENTER ARRAY ELEMENTS: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	cout << "YOUR UNSORTED ARRAY IS: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ",";
	}
	cout << endl;
}


void Sort::search(void)
{
	int key;
	int pos=0;
	int p;
	cout << "ENTER THE NUMBER YOU WANT TO FIND" << endl;
	cin >> key;
	for (p = 0; p < size; p++)
	{
		if (arr[p] == key)
		{
			pos = p;
			cout << "FOUND AT: " << pos;
			cout << endl;
		}

	}
	if (p == size) {
		cout<<"NOT-FOUND"<<endl;
	}

	
}

void Sort::sort(void)
{	
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "YOUR BUBBLESORTED ARRAY IS: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ",";
	}
	cout << endl;
}



