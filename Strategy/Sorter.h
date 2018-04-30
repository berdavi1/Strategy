#pragma once

#include <vector>

namespace Strategy
{
    enum class SortStrategy
    {
        Bubble,
        Insertion,
        Selection
    };

    class Sorter final
    {
    public:
        Sorter(SortStrategy strategy);

        // Do not change
        void sort(std::vector<int>& vector) const;

    private:
        const SortStrategy strategy_;
    };
}