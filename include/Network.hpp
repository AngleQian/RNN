//
// Created by Angle Qian on 04/03/2018.
//

#ifndef RNN_NETWORK_HPP
#define RNN_NETWORK_HPP

#include <vector>
#include "Layer.hpp"

class RandomGen;

class Layer;

class Network {
public:
    explicit Network(std::vector<int> topology);

    void initializeNetwork(RandomGen *randomGen);

    std::vector<Layer *> *getNetwork() { return &network; }

    void feedForward(std::vector<double> input);

    void backPropagation();

private:
    std::vector<Layer *> network;
};


#endif //RNN_NETWORK_HPP
