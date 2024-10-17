#include "JumpSearch.h"

// Constructeur par d�faut
JumpSearch::JumpSearch() : SearchingAlgorithm() {}

// Destructeur
JumpSearch::~JumpSearch() {}

// Fonction de recherche par sauts (Jump Search)
int JumpSearch::search(const std::vector<int>& vec, int target) {
    numberComparisons = 0;
    size_t n = vec.size();
    size_t step = static_cast<size_t>(sqrt(n));

    size_t prev = 0;
    // Trouver le bloc o� l'�l�ment pourrait �tre pr�sent
    while (prev < n && vec[std::min(step, n) - 1] < target) {
        numberComparisons++;
        prev = step;
        step += static_cast<size_t>(sqrt(n));
        if (prev >= n) {
            return -1;
        }
    }

    // Faire une recherche lin�aire dans le bloc
    while (prev < n && vec[prev] < target) {
        numberComparisons++;
        prev++;
        if (prev == std::min(step, n)) {
            return -1;
        }
    }

    // V�rifier si l'�l�ment est trouv�
    if (prev < n) {
        numberComparisons++;
        if (vec[prev] == target) {
            return static_cast<int>(prev);
        }
    }
    return -1;
}
