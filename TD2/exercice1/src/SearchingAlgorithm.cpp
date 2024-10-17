#include "SearchingAlgorithm.h"

// Initialisation des variables statiques
int SearchingAlgorithm::totalComparisons = 0;
int SearchingAlgorithm::totalSearch = 0;
double SearchingAlgorithm::averageComparisons = 0.0;

// Constructeur par défaut
SearchingAlgorithm::SearchingAlgorithm() : numberComparisons(0) {}

// Destructeur virtuel
SearchingAlgorithm::~SearchingAlgorithm() {}

// Afficher les résultats de la recherche
void SearchingAlgorithm::displaySearchResults(std::ostream& os, int results, int target) {
    // Mettre à jour les variables statiques
    totalComparisons += numberComparisons;
    totalSearch++;
    averageComparisons = static_cast<double>(totalComparisons) / totalSearch;

    // Afficher les résultats
    if (results != -1) {
        os << "L'élément " << target << " a été trouvé à l'indice " << results << "." << std::endl;
    } else {
        os << "L'élément " << target << " n'a pas été trouvé." << std::endl;
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
