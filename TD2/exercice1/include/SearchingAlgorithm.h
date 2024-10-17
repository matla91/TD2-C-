#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H

#include <vector>
#include <iostream>

// Classe de base abstraite pour les algorithmes de recherche
class SearchingAlgorithm {
protected:
    int numberComparisons; // Nombre de comparaisons pour une recherche
    static int totalComparisons; // Nombre total de comparaisons pour toutes les instances
    static int totalSearch; // Nombre total de recherches effectuées
    static double averageComparisons; // Nombre moyen de comparaisons

public:
    // Constructeur par défaut
    SearchingAlgorithm();

    // Destructeur virtuel
    virtual ~SearchingAlgorithm();

    // Fonction virtuelle pure pour la recherche
    virtual int search(const std::vector<int>& vec, int target) = 0;

    // Afficher les résultats de la recherche
    void displaySearchResults(std::ostream& os, int results, int target);

    // Obtenir le nombre moyen de comparaisons
    static double getAverageComparisons();
};

#endif // SEARCHINGALGORITHM_H
