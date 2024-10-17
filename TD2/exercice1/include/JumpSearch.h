#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H

#include "SearchingAlgorithm.h"
#include <cmath>

// Classe pour l'algorithme de recherche par sauts (Jump Search)
class JumpSearch : public SearchingAlgorithm {
public:
    // Constructeur par d�faut
    JumpSearch();

    // Destructeur
    virtual ~JumpSearch();

    // Impl�mentation de la fonction de recherche
    virtual int search(const std::vector<int>& vec, int target);
};

#endif // JUMPSEARCH_H
