//
// Created by Angle Qian on 04/03/2018.
//


#include "../include/Neuron.hpp"

Neuron::Neuron() {

}

void Neuron::activate() {

}

void Neuron::initializeNeuron(RandomGen *randomGen) {
    weight = randomGen->genNormalDist();
}

double Neuron::f(double x) {
    return Utils::tanh(x);
}

double Neuron::df(double x) {
    return Utils::dtanh(x);
}