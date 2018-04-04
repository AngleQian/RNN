//
// Created by Angle Qian on 04/03/2018.
//

#include "../include/Client.hpp"

Client::Client(std::vector<int> topology) : topology(topology),
                                            neuralNetwork(new Network(topology)) {

    initNetwork();
}

void Client::initNetwork() {
    neuralNetwork->initializeNetwork(new RandomGen(topology.at(0), topology.back()));
}
