//
// Created by Angle Qian on 04/03/2018.
//

#include "../include/Network.hpp"

Network::Network(std::vector<int> topology) {
    for (int layer_size : topology) {
        network.push_back(new Layer());
        //adds as many layers as the length of topology

        for (int i = 0; i != layer_size; ++i) {
            network.back()->getLayer()->push_back(new Neuron());
            //adds the regular neurons
        }


        network.back()->getLayer()->push_back(new Neuron());
        //adds one more biased neuron
        network.back()->getLayer()->back()->setValue(1.0);
        //sets the output value of that neuron to 1.0
    }
}

void Network::initializeNetwork(RandomGen *randomGen) {
    for (Layer *layer : network) {
        layer->initializeLayer(randomGen);
    }
}

void Network::feedForward(std::vector<double> input) {
    //check input array size and input layer neuron size - 1
    //ignore the last input layer neuron (the biased neuron)
    if (input.size() != network.at(0)->getLayer()->size() - 1) {
        std::cout << "Input mismatch" << std::endl;
        return;
    }

    //loop through each layer
    for (unsigned i = 0; i != network.size(); ++i) {
        //for the input layer, set the values according to the input
        if (i == 0) {
            //loop through the neurons in the input layer, ignoring the last biased neuron
            for (unsigned j = 0; j != input.size(); ++j) {
                network.at(i)->getLayer()->at(j)->setValue(input.at(j));
            }
        } else {
            //for other layers
            network.at(i)->feedForward(network.at(i - 1));
        }
    }
}

void Network::backPropagation() {

}