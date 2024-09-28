#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Heap


{
public:
	int heapsize;

	void maxHeapify(vector<int>&A, int i)
		
	{
		int Largest = i;
		int Left = 2 * i + 1; //left node
		int Right = 2 * i + 2; //right node

		if (Left < heapsize && A[Left] > A[i])
		{
			Largest = Left;
		}
		/*else
		{
			Largest = i;
		}*/
		if (Right < heapsize && A[Right] > A[Largest])
		{
			Largest = Right;
		}
		if (Largest != i)
		{
			/*int temp = A[i];
			A[i] = A[1];
			A[1] = temp;*/

			swap(A[i], A[Largest]);

			maxHeapify(A, Largest);
		}
		
	}




	 void MaxHeap( vector<int>&A)
	{
		 heapsize = A.size();
			 for (int i = heapsize / 2 -1; i>=0; i--)
			 {
				 maxHeapify(A, i);
			 }
	}



	/*vector <int> A;*/
	void HeapSort(vector<int>&A)
		
	{
		MaxHeap(A);
		int n = A.size();
		for (int i = A.size() - 1; i >0; i--)
		{
			/*int temp = A[1];
			A[1] = A[i];
			A[i] = temp;*/
			swap(A[0], A[i]);
			heapsize--;
			maxHeapify(A, 0);
		}
	}

	void print(vector<int>&A) 
	{
		for (int i = 0; i < A.size(); ++i)
		{
			cout << A[i] << " ";
		}
	}
	
};

