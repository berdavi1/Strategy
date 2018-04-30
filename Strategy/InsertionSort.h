#pragma once

#include "ISort.h"

namespace Strategy
{

    class InsertionSort : public ISort
    {
    public:
        void sort(std::vector<int>& vector) const override;
    };

}