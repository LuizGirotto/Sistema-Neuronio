#include <iostream>
#include <vector>
#include "NeuronioReLU.hpp"
using namespace std;

int main() {

    NeuronioReLU neuronio1({0.5, -0.2, 0.8}, 0.1);
    NeuronioReLU neuronio2({-0.3, 0.7, -0.5}, -0.2);

    vector<double> entradas1 = {1.0, 2.0, 3.0};
    vector<double> entradas2 = {-1.0, 0.5, 2.5};

    cout << "Neuronio 1: " << neuronio1.predict(entradas1) << endl;
    cout << "Neuronio 2: " << neuronio2.predict(entradas2) << endl;

    return 0;
}
