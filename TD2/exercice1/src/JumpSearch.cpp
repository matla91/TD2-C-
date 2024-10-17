#include "JumpSearch.h"

// Constructeur par défaut
JumpSearch::JumpSearch() : SearchingAlgorithm() {}

// Destructeur
JumpSearch::~JumpSearch() {}

// Fonction de recherche par sauts (Jump Search)
int JumpSearch::search(const std::vector<int>& vec, int target) {
    numberComparisons = 0;
    size_t n = vec.size();
    size_t step = static_cast<size_t>(sqrt(n));

    size_t prev = 0;
    // Trouver le bloc où l'élément pourrait être présent
    while (prev < n && vec[std::min(step, n) - 1] < target) {
        numberComparisons++;
        prev = step;
        step += static_cast<size_t>(sqrt(n));
        if (prev >= n) {
            return -1;
        }
    }

    // Faire une recherche linéaire dans le bloc
    while (prev < n && vec[prev] < target) {
        numberComparisons++;
        prev++;
        if (prev == std::min(step, n)) {
            return -1;
        }
    }

    // Vérifier si l'élément est trouvé
    if (prev < n) {
        numberComparisons++;
        if (vec[prev] == target) {
            return static_cast<int>(prev);
        }
    }
    return -1;
}
