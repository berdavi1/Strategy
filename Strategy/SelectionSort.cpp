#include "SelectionSort.h"

namespace Strategy
{

    void SelectionSort::sort(std::vector<int>& vector) const
    {
        const int size = vector.size();

        for (int i = 0; i < size - 1; i++)
        {
            int min_idx = i;

            for (int j = i + 1; j < size; j++)
            {
                if (vector[j] < vector[min_idx])
                {
                    min_idx = j;
                }
            }

            std::swap(vector[min_idx], vector[i]);
        }
    }

}