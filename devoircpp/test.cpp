#include <iostream>
#include <vector>

template<typename T>
void testFunction(const std::vector<T>& params) {
    std::cout << "Fonction appelée avec " << params.size() << " paramètres.\n";
}

int main() {
    std::vector<int> parameters;  

    const int paramIncrement = 10000; 
    int paramCount = 0;

    std::cout << "Test automatique de la fonction avec un nombre croissant de paramètres (sans limite)...\n";

    while (true) {
        for (int i = 0; i < paramIncrement; ++i) {
            parameters.push_back(paramCount + i);
        }
        paramCount += paramIncrement;

        
        testFunction(parameters);

        // Afficher l'état
        std::cout << "Test avec " << paramCount << " paramètres effectué.\n";
    }

    return 0; 
}
