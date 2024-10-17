#include <iostream>
#include <vector>

#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"

int main() {
    // Cr�er un vecteur d'entiers tri�s
    std::vector<int> vec;
    for (int i = 1; i <= 100; ++i) {
        vec.push_back(i);
    }

    int target = 42; // �l�ment � rechercher

    // Recherche lin�aire
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
