#pragma once
#include <vector>

class iSortingStrategy
{
public:
	virtual void sort(std::vector<int> & v) = 0;
};

