#include"DataSorter.h"
#include <vector>
#include "SelectionSort.hxx"
#include "BubbleSort.hxx"
#include <iostream>

//Strategy pattern
// Context delegates the sorting to family of algorithms of sorting
// So that new strategies can be added/ existing can be modified without impacting other strategies
// Strategy can be set interchangably


int main()
{
	using namespace std;
	vector<int> v{ 3,2,19,0 };
	SelectionSort ssort;
	BubbleSort bsort;
	DataSorter dst(v);

	dst.setStrategy(&ssort);
	dst.setStrategy(&bsort);
	dst.sort();

	cout << "===================" << endl;
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << " " <<  v[i] << " " << "\t";
	}
	cout << endl;
	return 0;

}