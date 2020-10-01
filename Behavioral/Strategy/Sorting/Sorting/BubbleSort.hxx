#pragma once
#include "iSortingStrategy.h"
class BubbleSort :
    public iSortingStrategy
{
public:
    virtual void sort(std::vector<int>& v) override;
};

