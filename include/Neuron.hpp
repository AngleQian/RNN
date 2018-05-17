//
// Created by Angle Qian on 04/03/2018.
//

#ifndef RNN_NEURON_HPP
#define RNN_NEURON_HPP

#include "Client.hpp"

class RandomGen;

class Layer;

class Neuron {
public:
    Neuron();

    void activate();

    void initializeNeuron(RandomGen *randomGen);

    double getValue() { return value; }

    void setValue(double value) { this->value = value; }

    double getWeight() { return weight; };

    void feedForward(Layer *prevLayer);

private:
    double f(double x);

    double df(double x);

    double value;
    double weight;
};


#endif //RNN_NEURON_HPP
