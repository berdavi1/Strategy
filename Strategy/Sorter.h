#pragma once

#include <vector>
#include <memory>

namespace Strategy
{
    class ISort;

    class Sorter final
    {
    public:
        Sorter(std::unique_ptr<ISort> strategy);

        // Do not change
        void sort(std::vector<int>& vector) const;

    private:
        std::unique_ptr<ISort> strategy_;
    };
}