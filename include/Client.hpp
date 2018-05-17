//
// Created by Angle Qian on 04/03/2018.
//

#ifndef RNN_CLIENT_HPP
#define RNN_CLIENT_HPP

#include <vector>
#include "Utils.hpp"

class Network;

class Client {
public:
    explicit Client(std::vector<int> topology);

    void initNetwork();

    Network *getNetwork() { return neuralNetwork; }

    void feedForward();

    void backPropagation();

private:
    std::vector<int> topology; //first element is size of input layer, last element is size of output layer
    Network *neuralNetwork;
};


#endif //RNN_CLIENT_HPP
