//
// Created by Angle Qian on 04/03/2018.
//

#include "../include/Layer.hpp"

Layer::Layer() {

}

void Layer::initializeLayer(RandomGen *randomGen) {
    for (Neuron *neuron : layer) {
        neuron->initializeNeuron(randomGen);
    }
}

void Layer::feedForward(Layer *prevLayer) {
    //loop through each neuron in the current layer
    //skipping the last biased neuron
    for (int i = 0; i != layer.size() - 1; ++i) {
        layer.at(i)->feedForward(prevLayer);
    }
}
