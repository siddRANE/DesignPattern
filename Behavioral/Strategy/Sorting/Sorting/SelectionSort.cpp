#include "SelectionSort.hxx"

void SelectionSort::sort(std::vector<int>& v)
{
	if (v.empty())
		return;
		int min = v[0];
	for (size_t cur = 0; cur < v.size()-1; cur++)
	{
		size_t pmin = cur;
		for (size_t i = cur; i< v.size(); ++i)
		{
			if (v[pmin] > v[i])
			{
				pmin = i;
			}
		}
		std::swap(v[pmin], v[cur]);
	}
}
