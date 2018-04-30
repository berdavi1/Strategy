#include "Sorter.h"

namespace Strategy
{
    void swap(int& xp, int& yp)
    {
        int temp = xp;
        xp = yp;
        yp = temp;
    }

    void bubbleSort(std::vector<int>& vector)
    {
        const int size = vector.size();

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (vector[j] > vector[j + 1])
                {
                    swap(vector[j], vector[j + 1]);
                }
            }
        }
    }

    void insertionSort(std::vector<int>& vector)
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

    void selectionSort(std::vector<int>& vector)
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

            swap(vector[min_idx], vector[i]);
        }
    }

    Sorter::Sorter(SortStrategy strategy)
        : strategy_(strategy)
    {
        // no-op...
    }

    void Sorter::sort(std::vector<int>& vector) const
    {
        switch (strategy_)
        {
        case SortStrategy::Bubble:
            bubbleSort(vector);
            break;
        case SortStrategy::Insertion:
            insertionSort(vector);
            break;
        case SortStrategy::Selection:
            selectionSort(vector);
            break;
        default:
            throw std::invalid_argument("Invalid argument");
            break;
        }
    }

}