#include "DataSorter.h"
#include"SelectionSort.hxx"
DataSorter::DataSorter(std::vector<int>& data) :data_(data), pstrategy_(nullptr)
{
}

void DataSorter::sort()
{
	if (pstrategy_)
		pstrategy_->sort(data_);
}

void DataSorter::setStrategy(iSortingStrategy* pstrategy)
{
	pstrategy_ = (pstrategy);
}
