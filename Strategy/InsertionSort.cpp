#include "InsertionSort.h"

namespace Strategy
{

    void InsertionSort::sort(std::vector<int>& vector) const
    {
        const int size = vector.size();

        for (int i = 1; i < size; i++)
        {
            const int key = vector[i];
            int j = i - 1;

            while (j >= 0 && vector[j] > key)
            {
                vector[j + 1] = vector[j];
                j = j - 1;
            }

            vector[j + 1] = key;
        }
    }

}