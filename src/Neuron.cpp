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

void Neuron::feedForward(Layer *prevLayer) {
    double tempValue = 0;
    //loop through neurons of the previous layer, including biased
    for (Neuron *neuron : *(prevLayer->getLayer())) {
        //sum the values * weights of those neurons
        tempValue += neuron->getValue() * neuron->getWeight();
    }
    //pass the value through activation function
    value = f(tempValue);
}