#include "Sorter.h"

#include "ISort.h"

namespace Strategy
{

    Sorter::Sorter(std::unique_ptr<ISort> strategy)
        : strategy_(std::move(strategy))
    {
        // no-op...
    }

    void Sorter::sort(std::vector<int>& vector) const
    {
        strategy_->sort(vector);
    }

}