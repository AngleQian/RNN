//
// Created by Angle Qian on 04/03/2018.
//

#include "../include/Network.hpp"

Network::Network(std::vector<int> topology) {
    for (int layer_size : topology) {
        Layer *tempLayer = new Layer();
        network.push_back(tempLayer);
        for (int i = 0; i != layer_size; ++i) {
            Neuron *tempNeuron = new Neuron();
            network.back()->getLayer()->push_back(tempNeuron);
        }
    }
}

void Network::initializeNetwork(RandomGen *randomGen) {
    for (Layer *layer : network) {
        layer->initializeLayer(randomGen);
    }
}
