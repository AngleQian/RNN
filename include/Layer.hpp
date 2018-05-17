//
// Created by Angle Qian on 04/03/2018.
//

#ifndef RNN_LAYER_HPP
#define RNN_LAYER_HPP

#include "Neuron.hpp"
#include <vector>

class RandomGen;

class Neuron;

class Layer {
public:
    Layer();

    void initializeLayer(RandomGen *randomGen);

    std::vector<Neuron *> *getLayer() { return &layer; };

    void feedForward(Layer *prevLayer);

private:
    std::vector<Neuron *> layer;
};


#endif //RNN_LAYER_HPP
