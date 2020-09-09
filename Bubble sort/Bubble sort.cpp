// Bubble sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

void enterData(int& numberOfElements, vector<int>& mas);
void bubbleSort(vector<int>& mas);
void showMas(vector<int> mas);

int main()
{
	vector<int> mas;
	int numberOfElements;
	enterData(numberOfElements, mas);
	bubbleSort(mas);
	showMas(mas);
}

void enterData(int& numberOfElements, vector<int>& mas) {
	cin >> numberOfElements;
	int number;
	for (int i = 0; i < numberOfElements; i++) {
		cin >> number;
		mas.push_back(number);
	}
}

void bubbleSort(vector<int>& mas) {
	bool isSorted;
	for (int i = 0; i < mas.size(); i++) {
		isSorted = true;
		for (int j = 1; j < mas.size(); j++) {
			if (mas[j - 1] > mas[j]) {
				swap(mas[j - 1], mas[j]);
				isSorted = false;
			}
		}
		if (isSorted)
			return;
	}
}

void showMas(vector<int> mas) {
	for (int i = 0; i < mas.size(); i++) {
		cout << mas[i] << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
