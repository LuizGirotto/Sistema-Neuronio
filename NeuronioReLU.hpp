#include <iostream>
#include "Neuronio.hpp"
using namespace std;

class NeuronioReLU : public Neuronio {
    public:
        NeuronioReLU(const vector<double>& pesos, double bias)
        :Neuronio(pesos, bias) {}

        double predict(const vector<double> entradas) const override {
            double sum = 0.0;

            for (int i=0; i<entradas.size(); i++){
                sum += entradas[i] * pesos[i];
            }
            sum += bias;
            return (sum > 0) ? sum : 0.0;

        };
};
