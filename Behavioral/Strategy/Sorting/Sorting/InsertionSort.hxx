#pragma once
#include "iSortingStrategy.h"
class InsertionSort :
    public iSortingStrategy
{
public:
    virtual void sort(std::vector<int>& v) override;
};

