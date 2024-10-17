#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "SearchingAlgorithm.h"

// Classe pour l'algorithme de recherche linéaire
class LinearSearch : public SearchingAlgorithm {
public:
    // Constructeur par défaut
    LinearSearch();

    // Destructeur
    virtual ~LinearSearch();

    // Implémentation de la fonction de recherche
    virtual int search(const std::vector<int>& vec, int target);
};

#endif // LINEARSEARCH_H
