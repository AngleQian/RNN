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
