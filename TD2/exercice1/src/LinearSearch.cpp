#include "LinearSearch.h"

// Constructeur par d�faut
LinearSearch::LinearSearch() : SearchingAlgorithm() {}

// Destructeur
LinearSearch::~LinearSearch() {}

// Fonction de recherche lin�aire
int LinearSearch::search(const std::vector<int>& vec, int target) {
    numberComparisons = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        numberComparisons++;
        if (vec[i] == target) {
            return static_cast<int>(i);
        }
    }
    return -1;
}
