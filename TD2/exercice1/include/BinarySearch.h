#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "SearchingAlgorithm.h"

// Classe pour l'algorithme de recherche binaire
class BinarySearch : public SearchingAlgorithm {
public:
    // Constructeur par défaut
    BinarySearch();

    // Destructeur
    virtual ~BinarySearch();

    // Implémentation de la fonction de recherche
    virtual int search(const std::vector<int>& vec, int target);
};

#endif // BINARYSEARCH_H

