//
// Created by Angle Qian on 04/03/2018.
//

#ifndef RNN_UTILS_HPP
#define RNN_UTILS_HPP

#include <cmath>
#include <random>
#include <iostream>
#include <iomanip>
#include "Network.hpp"

class Network;

namespace Utils {
    double tanh(double x);

    double dtanh(double x);

    void printWeights(Network *n, int precision);

    void printValues(Network *n, int precision);
}

class RandomGen {
public:
    RandomGen(int inputNumber, int outputNumber);

    double genNormalDist();

private:
    int inputNumber, outputNumber;
    double mean = 0;
    double stdev = sqrt((double) 2 / (inputNumber + outputNumber));
    double min = mean - 10 * stdev;
    double max = mean + 10 * stdev;
    std::random_device rd;
    std::mt19937 gen;
    std::normal_distribution<double> normalDist{mean, stdev};
};


#endif //RNN_UTILS_HPP
