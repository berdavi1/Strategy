#include "Sorter.h"

#include <iostream>
#include <tchar.h>
#include <string>
#include <vector>

using namespace Strategy;

// Do not change
void printVector(const std::vector<int>& vector)
{
    for (const auto& current : vector)
    {
        std::cout << current << " ";
    }

    std::cout << std::endl;
}

// Do not change
void sortVector(const Sorter& sorter, std::vector<int> vector, const std::string& name)
{
    std::cout << name << " sort" << std::endl;
    printVector(vector);
    sorter.sort(vector);
    printVector(vector);
    std::cout << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    const std::vector<int> original({ 3, 42, 12, 22, 567, 99, 2, 0, 1, 32, 22, 42, 0, 9, 8, 9999, 7, 6, 5, 4, 3, 2, 1, 33, 44, 55, 32, 12, 32, 43, 54, 73, 21, 32, -543 });

    const Sorter bubble_sorter(SortStrategy::Bubble);
    sortVector(bubble_sorter, original, "Bubble");

    const Sorter insertion_sorter(SortStrategy::Insertion);
    sortVector(insertion_sorter, original, "Insertion");

    const Sorter selection_sorter(SortStrategy::Selection);
    sortVector(selection_sorter, original, "Selection");

    // wait
    std::string str;
    std::getline(std::cin, str);

	return 0;
}

