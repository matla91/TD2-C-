#include "SearchingAlgorithm.h"

// Initialisation des variables statiques
int SearchingAlgorithm::totalComparisons = 0;
int SearchingAlgorithm::totalSearch = 0;
double SearchingAlgorithm::averageComparisons = 0.0;

// Constructeur par d�faut
SearchingAlgorithm::SearchingAlgorithm() : numberComparisons(0) {}

// Destructeur virtuel
SearchingAlgorithm::~SearchingAlgorithm() {}

// Afficher les r�sultats de la recherche
void SearchingAlgorithm::displaySearchResults(std::ostream& os, int results, int target) {
    // Mettre � jour les variables statiques
    totalComparisons += numberComparisons;
    totalSearch++;
    averageComparisons = static_cast<double>(totalComparisons) / totalSearch;

    // Afficher les r�sultats
    if (results != -1) {
        os << "L'�l�ment " << target << " a �t� trouv� � l'indice " << results << "." << std::endl;
    } else {
        os << "L'�l�ment " << target << " n'a pas �t� trouv�." << std::endl;
    }

    os << "Nombre de comparaisons pour cette recherche : " << numberComparisons << std::endl;
    os << "Nombre total de comparaisons : " << totalComparisons << std::endl;
    os << "Nombre total de recherches : " << totalSearch << std::endl;
    os << "Nombre moyen de comparaisons : " << averageComparisons << std::endl;
}

// Obtenir le nombre moyen de comparaisons
double SearchingAlgorithm::getAverageComparisons() {
    return averageComparisons;
}
