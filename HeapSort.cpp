// HeapSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include "Heap.h"
#include <chrono>
using namespace std::chrono;
using namespace std;

int main()
{
	ifstream inputFile("50000.txt");
	vector<int> A;
	int number;

	while (inputFile >> number)
	{
		A.push_back(number);
	}
	Heap heap;
	heap.HeapSort(A);

	cout << "Sorted!" << endl;
	heap.print(A);

	auto start = high_resolution_clock::now();
	heap.HeapSort(A);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start);

	cout << endl;
	cout << "Time! " << duration.count() << " nanoseconds" << endl;



	return 0;

}

