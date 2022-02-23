#include <iostream>

int main() {

    double weight;
    int nOfPlanet;
    double gravityDestiny;


    std::cout << "What's your weight?\n";
    std::cin >> weight;

    std::cout << "What's the n of your destiny?\n1) Mercury\n2) Venus\n3) Mars\n4) Jupiter\n";
    std::cin >> nOfPlanet;

    switch (nOfPlanet) {
        case 1:
            gravityDestiny = 0.78;
            weight *= gravityDestiny;
            break;

        case 2:
            gravityDestiny = 0.39;
            weight *= gravityDestiny;
            break;

        case 3:
            gravityDestiny = 2.65;
            weight *= gravityDestiny;
            break;

        case 4:
            gravityDestiny = 1.17;
            weight *= gravityDestiny;
            break;
    }

    std::cout << "Your weight will be: " << weight << " Kg." << std::endl;

}