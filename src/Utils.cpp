//
// Created by Angle Qian on 04/03/2018.
//

#include "../include/Utils.hpp"

double Utils::tanh(double x) {
    return (exp(x) - exp(-x)) / (exp(x) + exp(-x));
}

double Utils::dtanh(double x) {
    return (1 - pow(Utils::tanh(x), 2));
}

void Utils::printWeights(Network *n, int precision) {
    using namespace std;
    cout << "Weights: " << endl;
    cout << fixed << showpoint;
    cout << setprecision(precision);
    for (Layer *layer : *(n->getNetwork())) {
        for (Neuron *neuron : *(layer->getLayer())) {
            cout << neuron->getWeight() << "   ";
        }
        cout << endl;
    }
}

void Utils::printValues(Network *n, int precision) {
    using namespace std;
    cout << "Values: " << endl;
    cout << fixed << showpoint;
    cout << setprecision(precision);
    for (Layer *layer : *(n->getNetwork())) {
        for (Neuron *neuron : *(layer->getLayer())) {
            cout << neuron->getValue() << "   ";
        }
        cout << endl;
    }
}

RandomGen::RandomGen(int inputNumber, int outputNumber) :
        inputNumber(inputNumber),
        outputNumber(outputNumber),
        gen(rd()) {

}

double RandomGen::genNormalDist() {
    double x = normalDist(gen);
    while (x < min || x > max) {
        x = normalDist(gen);
    }
    return x;
}