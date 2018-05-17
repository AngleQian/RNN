//
// Created by Angle Qian on 04/03/2018.
//

#include "../include/Client.hpp"

Client::Client(std::vector<int> topology) : topology(topology),
                                            neuralNetwork(new Network(topology)) {

    initNetwork();
    feedForward();
}

void Client::initNetwork() {
    neuralNetwork->initializeNetwork(new RandomGen(topology.at(0), topology.back()));
}

void Client::feedForward() {
    std::vector<double> tempInput;
    for (int i = 0; i != 3; ++i) {
        tempInput.push_back(2.0);
    }

    neuralNetwork->feedForward(tempInput);
}

void Client::backPropagation() {

}