#include <iostream>
#include <vector>

#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"

int main() {
    // Créer un vecteur d'entiers triés
    std::vector<int> vec;
    for (int i = 1; i <= 100; ++i) {
        vec.push_back(i);
    }

    int target = 42; // Élément à rechercher

    // Recherche linéaire
    LinearSearch linearSearch;
    int resultLinear = linearSearch.search(vec, target);
    linearSearch.displaySearchResults(std::cout, resultLinear, target);

    // Recherche par sauts
    JumpSearch jumpSearch;
    int resultJump = jumpSearch.search(vec, target);
    jumpSearch.displaySearchResults(std::cout, resultJump, target);

    // Recherche binaire
    BinarySearch binarySearch;
    int resultBinary = binarySearch.search(vec, target);
    binarySearch.displaySearchResults(std::cout, resultBinary, target);

    return 0;
}
