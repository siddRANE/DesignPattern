#pragma once
#include "iSortingStrategy.h"
class SelectionSort :
    public iSortingStrategy
{
    virtual void sort(std::vector<int>& v) override;
};

