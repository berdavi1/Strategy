#pragma once

#include <vector>

namespace Strategy
{

    template <class T>
    class Sorter final
    {
    public:
        Sorter()
        {

        }

        void sort(std::vector<int>& vector) const
        {
            strategy_.sort(vector);
        }

    private:
        const T strategy_;
    };
}