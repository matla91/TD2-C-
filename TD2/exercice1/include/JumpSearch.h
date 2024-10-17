#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H

#include "SearchingAlgorithm.h"
#include <cmath>

// Classe pour l'algorithme de recherche par sauts (Jump Search)
class JumpSearch : public SearchingAlgorithm {
public:
    // Constructeur par défaut
    JumpSearch();

    // Destructeur
    virtual ~JumpSearch();

    // Implémentation de la fonction de recherche
    virtual int search(const std::vector<int>& vec, int target);
};

#endif // JUMPSEARCH_H
