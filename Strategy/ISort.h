#pragma once

#include <vector>

namespace Strategy
{

    class ISort
    {
    public:
        virtual ~ISort() = default;

        virtual void sort(std::vector<int>& vector) const = 0;
    };

}