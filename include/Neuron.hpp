//
// Created by Angle Qian on 04/03/2018.
//

#ifndef RNN_NEURON_HPP
#define RNN_NEURON_HPP


class Neuron {
private:
    double value;
    double weight;

    double sigmoid(double x);
public:
    double getValue() { return value; }

    double getWeight() { return weight; }

    void activation();
};


#endif //RNN_NEURON_HPP
