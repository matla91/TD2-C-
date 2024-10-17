#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "SearchingAlgorithm.h"

// Classe pour l'algorithme de recherche lin�aire
class LinearSearch : public SearchingAlgorithm {
public:
    // Constructeur par d�faut
    LinearSearch();

    // Destructeur
    virtual ~LinearSearch();

    // Impl�mentation de la fonction de recherche
    virtual int search(const std::vector<int>& vec, int target);
};

#endif // LINEARSEARCH_H
