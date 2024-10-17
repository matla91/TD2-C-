#include "BinarySearch.h"

// Constructeur par défaut
BinarySearch::BinarySearch() : SearchingAlgorithm() {}

// Destructeur
BinarySearch::~BinarySearch() {}

// Fonction de recherche binaire
int BinarySearch::search(const std::vector<int>& vec, int target) {
    numberComparisons = 0;
    int left = 0;
    int right = static_cast<int>(vec.size()) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        numberComparisons++;

        if (vec[mid] == target) {
            return mid;
        } else if (vec[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
