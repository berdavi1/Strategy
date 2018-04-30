#pragma once

#include "ISort.h"

namespace Strategy
{

    class BubbleSort : public ISort
    {
    public:
        void sort(std::vector<int>& vector) const override;
    };

}