#include "BubbleSort.h"

namespace Strategy
{

    void BubbleSort::sort(std::vector<int>& vector) const
    {
        const int size = vector.size();

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (vector[j] > vector[j + 1])
                {
                    std::swap(vector[j], vector[j + 1]);
                }
            }
        }
    }

}