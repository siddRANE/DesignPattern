#include "InsertionSort.hxx"

void InsertionSort::sort(std::vector<int>& v)
{
	if (v.empty())
		return;
	for (size_t k = 1; k < v.size(); k++)
	{
		for (size_t j = k; j > 0; j--)
		{
			if (v[j] < v[j - 1])
				std::swap(v[j], v[j - 1]);
			else
				break;
		}
	}

}
