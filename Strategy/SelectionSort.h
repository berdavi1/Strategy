#pragma once

#include "ISort.h"

namespace Strategy
{

    class SelectionSort : public ISort
    {
    public:
        void sort(std::vector<int>& vector) const override;
    };

}