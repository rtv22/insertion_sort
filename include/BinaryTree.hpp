#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename Iterator>
void insertion_sort(Iterator first, Iterator last)
{
	if (first > last)
		return;
	for (Iterator i = first + 1; i != last; ++i)
	for (Iterator j = i; j != first && *j < *(j - 1); --j)
		std::iter_swap(j - 1, j);
}
