#pragma once
class iSortingStrategy;
#include<vector>
class DataSorter
{
private:
	iSortingStrategy* pstrategy_;
	std::vector<int> &data_;
public:
	DataSorter(std::vector<int> & data) ;
	void sort();
	void setStrategy(iSortingStrategy* pstrategy);
};